import math

# Input dari terminal
alas_str = input("Diketahui :\nAlas = ")
tinggi_str = input("Tinggi = ")

alas_str = ''.join(filter(str.isdigit, alas_str))
tinggi_str = ''.join(filter(str.isdigit, tinggi_str))

# Mengonversi input menjadi float
alas = float(alas_str)
tinggi = float(tinggi_str)

# Menghitung panjang sisi-sisi segitiga
sisi_a = tinggi
sisi_b = math.sqrt(alas**2 + tinggi**2)

sisi_c = alas

# Menghitung keliling segitiga
keliling = sisi_a + sisi_b + sisi_c

# Menghitung luas segitiga
luas = 0.5 * alas * tinggi

# Menampilkan hasil
print(f"\nJawab :\nSisi A = {sisi_a:.0f} cm")
print(f"Sisi B = {sisi_b:.0f} cm")
print(f"Sisi C = {sisi_c:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")
