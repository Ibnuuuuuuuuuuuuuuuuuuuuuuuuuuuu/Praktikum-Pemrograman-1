ANGKA1, ANGKA2 = map(int, input("Input: \n").split())

if ANGKA1 > ANGKA2:
    ANGKA1, ANGKA2 = ANGKA2, ANGKA1

print("\nOutput:\n", ANGKA1, ANGKA2)