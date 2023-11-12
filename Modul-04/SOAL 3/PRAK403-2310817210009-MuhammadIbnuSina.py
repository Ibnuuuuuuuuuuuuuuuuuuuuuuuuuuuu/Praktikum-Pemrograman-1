NILAI1, NILAI2 = map(int, input("Input: \n").split())

print("Output: ")
if NILAI1 > NILAI2:
    for i in range(NILAI1, NILAI2 - 1, -1):
        print(f"{i} {NILAI1 + NILAI2 - i}", end="")
        if i != NILAI2:
            print(" - ", end="")
    print()
else:
    for i in range(NILAI1, NILAI2 + 1):
        print(f"{i} {NILAI1 + NILAI2 - i}", end="")
        if i != NILAI2:
            print(" - ", end="")
