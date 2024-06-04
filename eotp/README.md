
One difficulty of this solve was decrypting a secret message sent by an Erlang
program.

Erlang code is very hard to read.
Thus I converted the Erlang code to python pseudo code (node.py).
Making it easier for me to analyze the code.

The code transmitted a message which was encrypted using a one time pad
from a server to a client and vice versa.

A sequence of this client-server chat was provided in a Wireshark dump file.
Thus I could get the encrypted message out of the Wireshark dump file.
Another difficulty of this solve was that the Erlang protocol used was not fully
understood by Wireshark thus I had to do some manual protocol decoding.

Analyzing the server-client code I found out the cryptographic problem
introduced: a one time pad shall never be reused.
However the client uses a different variant of the same one time pad (doing
some arithmetic on the initial one). This arithmetic can be inverted by the
attacker and thus the encryption can be broken.

See solve.py how you might break this implementation of one time pad encryption.

```
gue@debian:~/OneDrive/2324/ACSC/round3/misc_eotp__solved$ python3 solve.py 
P0 = 09 13 21 37 53 60 07 20 44 30 04 51 08 57 47 49 27 66 28 10 25 42 32 56 31 46 23 12 02 24 40 14 26 68 48 67 55 58 65 39 19 63 45 34 38 41 15 50 54 69 22 43 05 06 33 17 00 11 01 61 62 35 59 29 03 52 18 16 64 36
P1 = 13 21 37 53 60 07 20 44 30 04 51 08 57 47 49 27 66 28 10 25 42 32 56 31 46 23 12 02 24 40 14 26 68 48 67 55 58 65 39 19 63 45 34 38 41 15 50 54 69 22 43 05 06 33 17 00 11 01 61 62 35 59 29 03 52 18 16 64 36 09
XX = 36 30 08 32 00 1c 2d 00 0f 24 74 4a 4f 55 11 1e 0b 02 06 05 03 01 0a 33 00 3c 3c 3a 55 43 2c 6e 50 11 15 17 1c 56 4b 42 09 01 55 5f 52 08 36 3a 18 22 6e 72 10 26 41 5b 01 1e 40 03 7f 2b 38 31 00 09 0a 5f 6d 3c
P0 = 00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69
P1 = 11 61 24 52 51 06 33 20 57 13 25 01 02 21 26 50 64 00 16 63 44 37 43 12 40 42 68 66 10 03 04 46 56 17 38 59 09 53 41 19 14 15 32 05 30 34 23 49 67 27 54 08 18 60 69 58 31 47 65 29 07 62 35 45 36 39 28 55 48 22
XX = 01 40 55 00 74 10 26 2d 4f 36 05 1e 3a 30 6e 36 5f 5b 0a 09 00 08 6e 3c 43 03 50 0b 06 31 24 00 0a 41 5f 2b 3c 32 52 42 2c 08 01 72 0f 55 3c 11 15 1e 3a 4a 09 00 18 1c 33 55 56 38 1c 03 7f 01 6d 4b 02 17 11 22
MM = openECSC{  n  _  4g n   0     a  u L    s   n  a   1n    4   03       
MM = openECSC{  n  _ m4g n   0 1n _a  u L    s   n  app 1n    4 g 03     a 
MM = openECSC{  n  _ m4g n   0 1ng_a  u L_   s   n  app 1n  r 4 g 03 2 eea 
MM = openECSC{can  _ m4g n   0 1ng_a  u L_  ss   n  app 1n  r 4ng 03 28eea 
MM = openECSC{can U_ m4g1ne  0d1ng_a fu L_m ss g n  app 1n_ r 4ng_03 28eea 
MM = openECSC{can U_ m4g1ne  0d1ng_a_fu L_m ss g n9 app 1n_ rl4ng_03828eea 
MM = openECSC{can U_ m4g1ne c0d1ng_a_fulL_m ss g n9_app 1n_ rl4ng_03828eea 
MM = openECSC{can_U_im4g1ne c0d1ng_a_fulL_m3ssag n9_app 1n_ rl4ng_03828eea 
MM = openECSC{can_U_im4g1ne_c0d1ng_a_fulL_m3ssag n9_app_1n_erl4ng_03828eea}
MM = openECSC{can_U_im4g1ne_c0d1ng_a_fulL_m3ssag1n9_app_1n_erl4ng_03828eea}
```

