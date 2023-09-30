# Input panjang sisi segitiga
input_sisi_str = input(
    "Diketahui : \nPanjang sisi segitiga berturut-turut adalah ")

sisi_list = input_sisi_str.replace("dan", ",").split(',')
sisi_list = [sisi.strip() for sisi in sisi_list]

# Input keliling tanah
keliling_tanah = float(input("Keliling Tanah Pak Dengklek adalah "))

# Input harga tanah per meter
harga_per_meter = float(input("Harga Tanah Per Meter adalah "))

# Menghitung biaya yang diperlukan
biaya = keliling_tanah * harga_per_meter

# Menampilkan hasil
print(
    f"Jawaban : \nBiaya yang diperlukan Pak Dengklek adalah : Rp {int(biaya)}")
