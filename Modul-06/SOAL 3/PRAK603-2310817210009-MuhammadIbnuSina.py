print("Input: ")
A, B = map(int, input().split())
if A != B:
    print('\nJumlah tidak sama')
    exit()

array1 = [int(j) for j in input().split()]
array2 = [int(j) for j in input().split()]

print("\nOutput: ")

for i in range(A):
    print(array1[i] * array2[i], end=" ")