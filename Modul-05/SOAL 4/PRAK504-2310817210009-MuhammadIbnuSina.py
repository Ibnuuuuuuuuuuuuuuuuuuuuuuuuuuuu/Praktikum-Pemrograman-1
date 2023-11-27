def REVERSE(num):
    REVERSED_num = 0
    while num > 0:
        REVERSED_num = REVERSED_num * 10 + num % 10
        num //= 10
    return REVERSED_num

def main():
    A, B = map(int, input().split())

    A = REVERSE(A)
    B = REVERSE(B)

    C = A + B
    print(REVERSE(C))

if __name__ == "__main__":
    main()
