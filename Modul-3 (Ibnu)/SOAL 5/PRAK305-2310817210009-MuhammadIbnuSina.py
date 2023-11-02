BILANGAN = int(input("Input: \n"))

HARI = BILANGAN // 86400
SISA = BILANGAN % 86400
JAM = SISA // 3600
JAM2 = BILANGAN // 3600
MENIT = (BILANGAN - (JAM2 * 3600)) // 60
DETIK = BILANGAN % 60

print ("Output:")
if BILANGAN >= 86400:
    print(f"{HARI} hari {JAM:02d}:{MENIT:02d}:{DETIK:02d}")
elif 3600 <= BILANGAN < 86400:
    print(f"{JAM:02d}:{MENIT:02d}:{DETIK:02d}")
elif 60 < BILANGAN < 3600:
    print(f"00:{MENIT:02d}:{DETIK:02d}")
else:
    print(f"{DETIK:02d}")