MAKS = int(input("Input: \n"))
print("Output: ")

for BIL in range(1, MAKS + 1):
    if BIL % 2 != 0:
        print(BIL, end=" ")

print()

for BIL in range(MAKS, 1, -1):
    if BIL % 2 == 0:
        print(BIL, end=" ")
