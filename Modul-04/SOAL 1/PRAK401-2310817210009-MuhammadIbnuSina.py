print("Input: ")
input_str = input()
ANGKAKELIPATAN, SIMBOL = input_str.split()
ANGKAKELIPATAN = int(ANGKAKELIPATAN)

print("Output: ")
for i in range(1, 51):
    if i % ANGKAKELIPATAN == 0:
        print(SIMBOL, end=' ')
    else:
        print(i, end=' ')