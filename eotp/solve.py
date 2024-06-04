# extracted from the pcap file from wireshark filter 'frame contains "enc"'
# then some offset into the packet because of the erlang packet format
# extracted manually
P0="09 0d 15 25 35 3c 07 14 2c 1e 04 33 08 39 2f 31 1b 42 1c 0a 19 2a 20 38 1f 2e 17 0c 02 18 28 0e 1a 44 30 43 37 3a 41 27 13 3f 2d 22 26 29 0f 32 36 45 16 2b 05 06 21 11 00 0b 01 3d 3e 23 3b 1d 03 34 12 10 40 24"
C0="2b 39 31 3a 69 34 3b 03 0f 1b 13 02 0a 5d 0b 43 5e 0b 1f 34 31 26 2d 2a 25 6a 26 3d 5d 44 41 39 42 2a 1c 1d 3f 1f 42 07 44 4d 41 1e 58 15 2f 26 10 19 0d 45 72 29 20 5a 19 17 42 58 6b 1f 36 6a 5b 19 20 1a 50 6a"
P1="0d 15 25 35 3c 07 14 2c 1e 04 33 08 39 2f 31 1b 42 1c 0a 19 2a 20 38 1f 2e 17 0c 02 18 28 0e 1a 44 30 43 37 3a 41 27 13 3f 2d 22 26 29 0f 32 36 45 16 2b 05 06 21 11 00 0b 01 3d 3e 23 3b 1d 03 34 12 10 40 24 09"
C1="1d 09 39 08 69 28 16 03 00 3f 67 48 45 08 1a 5d 55 09 19 31 32 27 27 19 25 56 1a 07 08 07 6d 57 12 3b 09 0a 23 49 09 45 4d 4c 14 41 0a 1d 19 1c 08 3b 63 37 62 0f 61 01 18 09 02 5b 14 34 0e 5b 5b 10 2a 45 3d 56"

def to_list(x):
    return [int(h, 16) for h in x.split()]

def pr(x):
    hx = [format(i, '02x') for i in x]
    print(' '.join(hx))

def prd(x):
    hx = [format(i, '02d') for i in x]
    print(' '.join(hx))

def prstr(x):
    hx = [chr(i) if i != None else " " for i in x]
    print(''.join(hx))

P0=to_list(P0)
C0=to_list(C0)
P1=to_list(P1)
C1=to_list(C1)
assert len(P0) == 70
assert len(C0) == 70
assert len(P1) == 70
assert len(C1) == 70
print("P0 = ", end='')
prd(P0)
print("P1 = ", end='')
prd(P1)

def xor_bytes(bytes1, bytes2):
    assert len(bytes1) == len(bytes2)
    return [b1 ^ b2 for b1, b2 in zip(bytes1, bytes2)]

# by xoring we can remove the key because C0 ^ KEY ^ M0 C1 ^ KEY ^ M1 = M0 ^ M1
# so XX contains M0 ^ M1
# we know some chars in M0 and M1 so we can calculate all the others!!
XX = xor_bytes(C0, C1)
print("XX = ", end='')
pr(XX)

# sort the list based on P0
combined = list(zip(P0, P1, XX))
combined_sorted = sorted(combined, key=lambda x: x[0])
P0, P1, XX = zip(*combined_sorted)

P0 = list(P0)
P1 = list(P1)
XX = list(XX)

print("P0 = ", end='')
prd(P0)
print("P1 = ", end='')
prd(P1)
print("XX = ", end='')
pr(XX)

MM = [None] * 70
MM[0] = ord('o')
MM[1] = ord('p')
MM[2] = ord('e')
MM[3] = ord('n')
MM[4] = ord('E')
MM[5] = ord('C')
MM[6] = ord('S')
MM[7] = ord('C')
MM[8] = ord('{')

# this works because the second message is the first message roted by one char left!
# thus we can calulate the xor-'distance' to the next character and xor-'add' it to the previous one!
for _ in range(10):
    for i in range(70):
        if MM[i] != None:
            MM[P1[i]] = MM[i] ^ XX[i]
    
    print("MM = ", end='')
    prstr(MM)

