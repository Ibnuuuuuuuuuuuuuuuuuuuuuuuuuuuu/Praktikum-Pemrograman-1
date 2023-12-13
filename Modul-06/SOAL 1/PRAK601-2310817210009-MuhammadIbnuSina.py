print("Input: ")
def BENTUK_MATRIKS(BARIS, KOLOM, AV):
    MATRIKS = [[0] * KOLOM for _ in range(BARIS)]
    index = 0

    for i in range(BARIS):
        for b in range(KOLOM):
            MATRIKS[i][b] = AV[index]
            index += 1

    return MATRIKS

def main():
    BARIS, KOLOM = map(int, input().split())

    ANGKA_MATRIKS = list(map(int, input().split()))

    HASIL_MATRIKS = BENTUK_MATRIKS(BARIS, KOLOM, ANGKA_MATRIKS)

    print("\nOutput: ")
    for i in range(BARIS):
        for b in range(KOLOM):
            print(HASIL_MATRIKS[i][b], end=" ")
        print()

if __name__ == "__main__":
    main()
