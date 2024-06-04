from Cryptodome.Util.number import getPrime, isPrime, long_to_bytes
from Cryptodome.Util.Padding import pad, unpad
from Cryptodome.Cipher import AES
from hashlib import sha256

with open('flag.txt', 'rb') as rf:
    flag = rf.read().strip()

print(flag)

path = "lazydh.txt"

p = getPrime(160)
q = (p-1)//2
while not isPrime(q):
    p = getPrime(160)
    q = (p-1)//2

g = 2
while pow(g, q, p) != 1:
    g += 1

with open("secret_a_b.txt") as rf:
    a = int(rf.readline())
    b = int(rf.readline())

print(a.bit_length())
print(b.bit_length())
assert a.bit_length() == b.bit_length() == 128
# A number with 128 bits has 39 digits!

a_digits = [int(d) for d in str(a)]

print(f" {g = }")
print(f" {p = }")
print(f" {a = }")
print(f" {b = }")

ga = pow(g, a, p)
gb = pow(g, b, p)
shared = pow(ga, b, p)
shared_other_side = pow(gb, a, p)
assert(shared == shared_other_side)
print(f"{ga = }")
print(f"{gb = }")
print(f"sh = {shared}")

# shared = gb ^ a
# new_shared = gb ^ (a + 111111111111111111111111111111111111111) 
# new_shared = shared * gb ^ 111111111111111111111111111111111111111

a1_digits = [(d + 1) % 10 for d in a_digits]
a1 = int(''.join(map(str, a1_digits)))
print(f" {a = }")
print(f"{a1 = }")
d = a1 - a
print(f" {d = }")
x1 = (shared * pow(gb, d, p)) % p
print(f"{x1 = }")

new_shared = pow(gb, a1, p)
print(f" x = {new_shared}")

assert(x1 == new_shared)

key = sha256(long_to_bytes(new_shared)).digest()
cipher = AES.new(key, AES.MODE_ECB)
enc_flag = cipher.encrypt(pad(flag, AES.block_size)).hex()

with open(path, 'w') as wf:
    wf.write(f"{p = }\n")
    wf.write(f"{ga = }\n")
    wf.write(f"{gb = }\n")
    wf.write(f"{shared = }\n")
    wf.write(f"{enc_flag = }\n")

with open(path, 'r') as file:
    lines = file.readlines()

for line in lines:
    key, value = line.strip().split(' = ')
    exec(f"{key} = {value}")

print(f"{p = }")
print(f"{ga = }")
print(f"{gb = }")
print(f"{shared = }")
print(f"{enc_flag = }")

x1 = (shared * pow(gb, d, p)) % p
print(f"{x1 = }")
assert(x1 == new_shared)

key = sha256(long_to_bytes(new_shared)).digest()
cipher = AES.new(key, AES.MODE_ECB)
enc_flag_bytes = bytes.fromhex(enc_flag)
decrypted_flag_padded = cipher.decrypt(enc_flag_bytes)
flag = unpad(decrypted_flag_padded, AES.block_size)

if flag.decode('utf-8').startswith("openECSC"):
    print(flag.decode('utf-8'))
    exit

