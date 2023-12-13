print("Input: ")
def BERAPA_JUMLAH_ZETSU(JUMLAH_RUANGAN, JUMLAH_ZETSU):
    hasil = []
    for i in range(JUMLAH_RUANGAN):
        hasil.append(JUMLAH_ZETSU[i] * (i + 1))
    return hasil

JUMLAH_RUANGAN = int(input())
JUMLAH_ZETSU = list(map(int, input().split()))
HASIL_RUANGAN = BERAPA_JUMLAH_ZETSU(JUMLAH_RUANGAN, JUMLAH_ZETSU) 

print("\nOutput: ")
print(" ".join(map(str, HASIL_RUANGAN)))
