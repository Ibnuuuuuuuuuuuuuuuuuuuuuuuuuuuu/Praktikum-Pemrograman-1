def inputMatriks(ordo):
    matriks = []
    for i in range(ordo):
        baris = list(map(int, input().split()))
        matriks.append(baris)
    return matriks

def multiplyMatrices(ordo, matriksA, matriksB):
    result = [[0] * ordo for _ in range(ordo)]
    for i in range(ordo):
        for j in range(ordo):
            result[i][j] = 0
            for x in range(ordo):
                result[i][j] += matriksA[i][x] * matriksB[x][j]
    return result

def printMatriks(ordo, matriks):
    print("Matriks AXB:")
    for i in range(ordo):
        for j in range(ordo):
            print(matriks[i][j], end=" ")
        print()

def main():
    ordo = int(input())

    print("Matriks A:")
    matriksA = inputMatriks(ordo)

    print("Matriks B:")
    matriksB = inputMatriks(ordo)

    matriksAXB = multiplyMatrices(ordo, matriksA, matriksB)

    print()
    printMatriks(ordo, matriksAXB)

if __name__ == "__main__":
    main()