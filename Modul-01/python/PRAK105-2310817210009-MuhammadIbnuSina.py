# Memasukkan input dari pengguna untuk variabel a, b, x, dan y
a = float(input("Variabel a bernilai: "))
b = float(input("Variabel b bernilai: "))
x = float(input("Variabel x bernilai: "))
y = float(input("Variabel y bernilai: "))

# Menghitung total sisa bagi dari a dibagi b dan x dibagi y
sisa_bagi_a = a % b
sisa_bagi_x = x % y

# hasil
print(f"Total sisa bagi dari a dibagi b dan x dibagi y adalah {int(sisa_bagi_a + sisa_bagi_x)}")
