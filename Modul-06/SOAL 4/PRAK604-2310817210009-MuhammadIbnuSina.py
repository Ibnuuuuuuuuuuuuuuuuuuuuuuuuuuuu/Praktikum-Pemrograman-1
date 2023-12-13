def get_input():
    return input()

def count_characters(s):
    return len(s)

def print_comparison(pesan1, pesan2, count):
    bintang = 0
    pagar = 0

    for y in range(count):
        if pesan1[y] == ' ' and pesan2[y] == ' ':
            print(" ", end='')
        elif pesan1[y] == pesan2[y]:
            print("*", end='')
            bintang += 1
        elif pesan1[y] != pesan2[y]:
            print("#", end='')
            pagar += 1

    print("\n* =", bintang)
    print("# =", pagar)

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

def main():
    array1 = get_input()
    array2 = get_input()

    count1 = len(array1)
    count2 = len(array2)

    if count1 == count2:
        pesan1 = array1
        pesan2 = array2

        print_comparison(pesan1, pesan2, count1)
    else:
        print("Panjang kalimat berbeda, pesan palsu")

if __name__ == "__main__":
    main()
