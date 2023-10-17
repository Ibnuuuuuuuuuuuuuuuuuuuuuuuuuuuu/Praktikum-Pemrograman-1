print("Input: ")
nilai_pertama = float(input("Masukkan Nilai Pertama: "))
nilai_kedua = float(input("Masukkan Nilai Kedua: "))

hasil = nilai_pertama + nilai_kedua

if int(nilai_pertama) == nilai_pertama:
    print("Output: ")
    print(
        f"Hasil dari penjumlahan nilai pertama \"{int(nilai_pertama)}\" dan nilai kedua \"{nilai_kedua:.1f}\" adalah \"{hasil:.2f}\"")
else:
    print("Output: ")
    print(
        f"Hasil dari penjumlahan nilai pertama \"{nilai_pertama:.2f}\" dan nilai kedua \"{nilai_kedua:.1f}\" adalah \"{hasil:.2f}\"")
