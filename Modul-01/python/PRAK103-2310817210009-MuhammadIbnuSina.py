a = float(input("Variabel a bernilai: "))
b = float(input("Variabel b bernilai: "))
x = float(input("Variabel x bernilai: "))
y = float(input("Variabel y bernilai: "))

hasil = (a + b) * x / y
hasil_format = "{:.2f}".format(hasil)

print("Hasil dari a ditambah b dikali x dan dibagi y adalah {}".format(hasil_format))