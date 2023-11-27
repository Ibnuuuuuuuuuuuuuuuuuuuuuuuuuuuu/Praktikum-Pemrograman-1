def MAKSIMAL(A, B):
    return max(A, B)

def MINIMAL(A, B):
    return min(A, B)

bilangan = int(input())
nilai = list(map(int, input().split()))

maks = -100000
minim = 100000

for nilai in nilai:
    maks = MAKSIMAL(maks, nilai)
    minim = MINIMAL(minim, nilai)

print(f"{maks} {minim}")
