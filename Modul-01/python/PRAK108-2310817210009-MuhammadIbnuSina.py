# Meminta input jumlah putaran dan jarak tempuh dari pengguna
putaran_str = input("Diketahui :\nPak Dengklek mengelilingi taman = ")
jarak_tempuh_str = input("Jarak tempuh Pak Dengklek = ")

putaran_str = ''.join(filter(str.isdigit, putaran_str))
jarak_tempuh_str = ''.join(filter(str.isdigit, jarak_tempuh_str))

# Mengonversi input menjadi float
putaran = float(putaran_str)
jarak_tempuh = float(jarak_tempuh_str)

# Menampilkan hasil dengan teks "Putaran" dan "Kilometer"
print(
    f"\nJawaban :\nJari-jari taman yang dikelilingi Pak Dengklek adalah {jarak_tempuh / (2 * 3.14 * putaran):.2f} Kilometer")
