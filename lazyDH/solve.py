from Cryptodome.Util.number import getPrime, isPrime, long_to_bytes
from Cryptodome.Util.Padding import pad, unpad
from Cryptodome.Cipher import AES
from hashlib import sha256

with open("lazydh.txt", 'r') as file:
    lines = file.readlines()

for line in lines:
    key, value = line.strip().split(' = ')
    exec(f"{key} = {value}")

print(f"{p = }")
print(f"{ga = }")
print(f"{gb = }")
print(f"{shared = }")
print(f"{enc_flag = }")

def woohaa():
    new_shared = (shared * pow(gb, d, p)) % p
    key = sha256(long_to_bytes(new_shared)).digest()
    cipher = AES.new(key, AES.MODE_ECB)
    enc_flag_bytes = bytes.fromhex(enc_flag)
    decrypted_flag_padded = cipher.decrypt(enc_flag_bytes)

    try:
        flag = unpad(decrypted_flag_padded, AES.block_size)
    except ValueError:
        return

    try:
        flag = flag.decode('utf-8')
    except UnicodeDecodeError:
        return
    
    if flag.startswith("openECSC"):
        print(flag)
        exit()


from itertools import combinations
from itertools import permutations

total_digits = 39

d = 111111111111111111111111111111111111111
print(d)
woohaa()

for positions in combinations(range(total_digits), total_digits-1):
    number = ['1' if i in positions else '0' for i in range(total_digits)]
    n = int(''.join(number))
    d = n
    print(d)
    woohaa()

for positions in combinations(range(total_digits), total_digits-2):
    number = ['1' if i in positions else '0' for i in range(total_digits)]
    n = int(''.join(number))
    d = n
    print(d)
    woohaa()

for positions in combinations(range(total_digits), total_digits-3):
    number = ['1' if i in positions else '0' for i in range(total_digits)]
    n = int(''.join(number))
    d = n
    print(d)
    woohaa()

for positions in combinations(range(total_digits), total_digits-4):
    number = ['1' if i in positions else '0' for i in range(total_digits)]
    n = int(''.join(number))
    d = n
    print(d)
    woohaa()

for positions in combinations(range(total_digits), total_digits-5):
    number = ['1' if i in positions else '0' for i in range(total_digits)]
    n = int(''.join(number))
    d = n
    print(d)
    woohaa()
    
for positions in combinations(range(total_digits), total_digits-6):
    number = ['1' if i in positions else '0' for i in range(total_digits)]
    n = int(''.join(number))
    d = n
    print(d)
    woohaa()

