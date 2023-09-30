# Input jumlah pasukan yang dibawa Yu Zhong
total_pasukan = float(input("Jumlah pasukan yang dibawa Yu Zhong: "))

# Input jumlah pahlawan
jumlah_pahlawan = float(input("Jumlah pahlawan: "))

# Menghitung jumlah pasukan yang harus dikalahkan setiap pahlawan
pasukan_per_pahlawan = total_pasukan / jumlah_pahlawan

# Menampilkan hasil tanpa titik desimal
print(
    f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {int(pasukan_per_pahlawan)} pasukan")
