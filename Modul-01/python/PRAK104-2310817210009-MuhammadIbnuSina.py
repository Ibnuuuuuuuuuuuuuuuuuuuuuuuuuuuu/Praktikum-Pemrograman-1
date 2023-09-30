# Input harga sepatu A dan B
harga_sepatu_A = float(input("Harga sepatu A adalah: "))
harga_sepatu_B = float(input("Harga sepatu B adalah: "))

# Menghitung harga sepatu A setelah mendapat diskon 13%
diskon_A = 13
harga_diskon_A = harga_sepatu_A * (100 - diskon_A) / 100

# Menghitung harga sepatu B setelah mendapat diskon 21%
diskon_B = 21
harga_diskon_B = harga_sepatu_B * (100 - diskon_B) / 100

# Menampilkan hasil
print(f"Sepatu A mendapat diskon {diskon_A}% sehingga harganya menjadi {int(harga_diskon_A)}")
print(f"Sepatu B mendapat diskon {diskon_B}% sehingga harganya menjadi {int(harga_diskon_B)}")