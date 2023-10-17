import math

print("Input: ")
TINGGI, MIRING = map(float, input().split())

alas = int(math.sqrt(MIRING**2 - TINGGI**2))
tinggi = int(TINGGI)
keliling = int(TINGGI + MIRING + alas)
luas = int(0.5 * alas * tinggi)

print("\nOutput:\nAlas = {} cm".format(alas))
print("tinggi = {} cm".format(tinggi))
print("keliling = {} cm".format(keliling))
print("Luas = {} cm^2".format(luas))
