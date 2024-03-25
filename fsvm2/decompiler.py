import sys

def tr(a):
    if a < 10:
        return str(a)
    else:
        a = a - 10
        a = a + ord('a')
        return chr(a)

file = open("bytecode", "rb")

data = file.read(1)
i=0 # address
j=0 # instr count

reg = [None] * 16

while data:

    print(hex(i), end =" ")

    if data >= b'@' and data <= b'O':
        idx = int.from_bytes(data) - int.from_bytes(b'@')
        reg[idx] = "0";
        print("reg" + tr(idx) + "=0")
    elif data >= b',' and data <= b';':
        idx = int.from_bytes(data) - int.from_bytes(b',')
        reg[idx] = "";
        print("reg" + tr(idx) + "=''")
    elif data == b'P':
        print("not implemented")
        exit()
    elif data == b'Q':
        a1 = int.from_bytes(file.read(1))
        a2 = int.from_bytes(file.read(1))
        a3 = int.from_bytes(file.read(1))
        i = i + 3
        reg[a3] = str(int(reg[a1]) + int(reg[a2]))
        print("reg" + tr(a3) + "=add(reg" + tr(a1) + ",reg" + tr(a2) + ")=" + reg[a3])
    elif data == b'R':
        a1 = int.from_bytes(file.read(1))
        i = i + 1
        reg[a1] = reg[a1] + "1"
        print("reg" + tr(a1) + "=append('1')=" + reg[a1])
    elif data == b'?':
        a1 = int.from_bytes(file.read(1))
        a2 = int.from_bytes(file.read(1))
        a3 = int.from_bytes(file.read(1))
        i = i + 3
        reg[a3] = (reg[a1] or '') + (reg[a2] or '')
        print("reg" + tr(a3) + "=cat(reg"+tr(a1)+",reg"+tr(a2)+")=" + reg[a3])
    elif data == b'>':
        a1 = int.from_bytes(file.read(1))
        a2 = int.from_bytes(file.read(1))
        i = i + 2
        reg[a2] = chr(int(reg[a1])%256)
        print("reg" + tr(a2) + "=to_ascii(reg" + tr(a1) + ")=" + reg[a2])
    elif data == b'=':
        a1 = int.from_bytes(file.read(1))
        a2 = int.from_bytes(file.read(1))
        i = i + 2
        if (len(reg[a1]) > 0):
            reg[a2] = str(ord(reg[a1][-1]))
        else:
            reg[a2] = "0"
        print("reg" + tr(a2) + "=last_to_dec(reg"+ tr(a1) + ")=" + reg[a2])
    elif data == b'S':
        a1 = int.from_bytes(file.read(1))
        i = i + 1
        if (len(reg[a1]) > 0):
            reg[a1] = reg[a1][:-1]
        print("reg" + tr(a1) + "=remove_last(reg"+ tr(a1) + ")=" + reg[a1])

        # FIXME uncomment to print coeeficients (37*37 matrix) to stderr
        #if (a1 == 8):
        #    print(reg[0], file=sys.stderr)

    elif data == b'T':
        a1 = int.from_bytes(file.read(1))
        i = i + 1
        if (len(reg[a1]) > 0):
            if (reg[a1][0] == '-'):
                  reg[a1] = reg[a1][1:]
            else:
                  reg[a1] = "-" + reg[a1]
            print("reg" + tr(a1) + "=neg()=" + reg[a1])
        else:
            print("warning empty reg" + tr(a1))
            exit()
    elif data == b'U':
        print("print(regf)=" + reg[15])
    elif data == b'V':
        # read from reg0
        with open(reg[0], 'r') as f:
            filedata = f.read()
        reg[0] = filedata[:-1]
        print("reg0=fread(reg0)=" + reg[0])
    elif data == b'W':
        print("exit")
    elif data == b'(':
        x = i + int(reg[10])
        print("seek(" + hex(x) + ")")
    elif data == b')':
        x = i + int(reg[10])
        print("seek(" + hex(x) + ") if regb==regc")
    elif data == b'*':
        x = i + int(reg[10])
        print("seek(" + hex(x) + ") if regb!=regc")
        # FIXME: this ouputs outcome of equations (vector with 37 elements) to stderr
        print(reg[11], file=sys.stderr)
    elif data == b'+':
        x = i + int(reg[10])
        print("seek(" + hex(x) + ") if regb<regc")
    else:
        print("unknown")
        exit()

    data = file.read(1)
    i = i + 1
    j = j + 1
file.close()

