def biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2023
    umur = tahun_sekarang - tahun_lahir

    print("\nPerkenalkan Nama Saya : {}".format(nama))
    print("Umur Saya : {}".format(umur))
    print("Saya Adalah Angkatan : {}".format(tahun_sekarang))
    print("Asal Saya dari : {}".format(asal))

def main():
    tahun_lahir = int(input())
    nama = input()
    asal = input()
    biodata(tahun_lahir, nama, asal)

if __name__ == "__main__":
    main()
