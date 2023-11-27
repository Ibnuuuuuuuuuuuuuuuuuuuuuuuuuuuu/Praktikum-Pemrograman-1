def MUTLAK(ANGKA):
    return -ANGKA if ANGKA < 0 else ANGKA

def HITUNG(NILAI1, NILAI2):
    return MUTLAK(NILAI1 - NILAI2)

def main():
    x1, y1, x2, y2 = map(int, input().split())
    hasil = HITUNG(x1, x2) + HITUNG(y1, y2)
    print(MUTLAK(hasil))

if __name__ == "__main__":
    main()
