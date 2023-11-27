def MAXBILANGAN(A, B, C, D):
    return max(A, B, C, D)

if __name__ == "__main__":
    A, B, C, D = map(int, input().split())
    hasil = MAXBILANGAN(A, B, C, D)
    print(hasil)
