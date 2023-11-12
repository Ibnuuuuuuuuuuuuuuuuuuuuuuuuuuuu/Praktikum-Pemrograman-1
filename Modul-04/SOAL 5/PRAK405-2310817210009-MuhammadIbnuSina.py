X, Z = map(int, input().split())
TOTALKESELURUHAN = 0
PERHITUNGANBARIS = 0

for i in range(1, X + 1):
    for j in range(i, 0, -1):
        if j > 1:
            hasilTunggal = j * Z
            PERHITUNGANBARIS += hasilTunggal
            print(f"({j} * {Z}) + ", end="")
        elif j == 1:
            hasilTerakhir = j * Z
            PERHITUNGANBARIS += hasilTerakhir
            print(f"({j} * {Z}) = {PERHITUNGANBARIS}")
            TOTALKESELURUHAN += PERHITUNGANBARIS
            PERHITUNGANBARIS = 0

print(TOTALKESELURUHAN)