def kalkulator():
    while True:
        print("\nPilih program")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Pembagian")
        print("5. Exit")

        PILIHAN = input("Masukkan Pilihan : ")

        if PILIHAN == "5":
            print("Terimakasih, telah menggunakan kalkulator MUHAMMAD IBNU SINA")
            break

        if PILIHAN in ["1", "2", "3", "4"]:
            NILAIPERTAMA = float(input("Masukkan nilai pertama : "))
            NILAIKEDUA = float(input("Masukkan nilai kedua : "))

            if PILIHAN == "1":
                HASIL = NILAIPERTAMA + NILAIKEDUA
                print(f"Hasil Penjumlahan antara {NILAIPERTAMA:.2f} dengan {NILAIKEDUA:.2f} adalah {HASIL:.2f}")
            elif PILIHAN == "2":
                HASIL = NILAIPERTAMA - NILAIKEDUA
                print(f"Hasil Pengurangan antara {NILAIPERTAMA:.2f} dengan {NILAIKEDUA:.2f} adalah {HASIL:.2f}")
            elif PILIHAN == "3":
                HASIL = NILAIPERTAMA * NILAIKEDUA
                print(f"Hasil Perkalian antara {NILAIPERTAMA:.2f} dengan {NILAIKEDUA:.2f} adalah {HASIL:.2f}")
            elif PILIHAN == "4":
                if NILAIKEDUA == 0:
                    print("Pembagian dengan nol tidak diizinkan.")
                else:
                    HASIL = NILAIPERTAMA / NILAIKEDUA
                    print(f"Hasil Pembagian antara {NILAIPERTAMA:.2f} dengan {NILAIKEDUA:.2f} adalah {HASIL:.2f}")
        else:
            print("Input anda salah, silahkan coba lagi")

if __name__ == "__main__":
    kalkulator()