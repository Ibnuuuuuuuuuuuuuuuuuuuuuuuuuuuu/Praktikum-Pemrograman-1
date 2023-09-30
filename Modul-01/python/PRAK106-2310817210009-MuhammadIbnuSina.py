# Memasukkan Input nilai a, b, dan c
a = float(input("Masukkan nilai a: "))
b = float(input("Masukkan nilai b: "))
c = float(input("Masukkan nilai c: "))

# Memeriksa apakah a sama dengan b
if a == b:
    hasil1 = 1
else:
    hasil1 = 0

# Memeriksa apakah b lebih besar dari c
if b > c:
    hasil2 = 1
else:
    hasil2 = 0

# Memeriksa apakah a tidak sama dengan c
if a != c:
    hasil3 = 1
else:
    hasil3 = 0

# Menampilkan hasil
print(f"Apakah a sama dengan b ? jawabannya adalah {hasil1}")
print(f"Apakah b lebih besar dari c ? jawabannya adalah {hasil2}")
print(f"Apakah a tidak sama dengan c ? jawabannya adalah {hasil3}")
