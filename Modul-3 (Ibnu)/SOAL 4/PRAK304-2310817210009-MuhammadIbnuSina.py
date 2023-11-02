Wilangan = int(input("Input : \n"))

print ("output : ")
if(Wilangan >= 100) :
    print("Anda Menginput Melebihi Limit Bilangan")
elif(Wilangan > 1 and Wilangan < 10) :
    print("Satuan")
elif (Wilangan > 9 and Wilangan < 20) :
    print("Belasan")
elif(Wilangan >= 20 and Wilangan < 100) :
    print("Puluhan")
else :
    print("Nol")