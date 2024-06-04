import random

def sub(L, P):
    return [L[p] for p in P]

def inv(P):
    return [P.index(i) for i in range(len(P))]

def xorL(M, K):
    return [m ^ k for m, k in zip(M, K)]

def enc(M, P, K):
    m = sub(M, P)
    C = xorL(m, K)
    print(f"enc {P = }, {C = }      {M = } -> {m = }")
    return C

def dec(C, P, K):
    m = xorL(C, K)
    i = inv(P)
    M = sub(m, i)
    print(f"dec {M = }     {m = } {i = }")
    return M

def do(Msg, Key, P):
    C = enc(Msg, P, Key)
    result = dec(C, P, Key)
    if result == Msg:
        P = P[1:] + P[:1]
        C = enc(Msg, P, Key)
        result = dec(C, P, Key)
        if result == Msg:
            print("ok")
        else:
            print("err")
    else:
        print("err")

Msg = [ 0, 11, 22, 33, 44 ]
Key = [ 64, 64, 64, 64, 64 ]

# create a list containing a shuffled sequence of integers from 0 to the length of Msg.
P = list(range(len(Msg)))
random.shuffle(P)

do(Msg, Key, P)

