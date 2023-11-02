ANGKO = int(input("Input: "))

if ANGKO >= 80:
    KONVERSI_HURUF = 'A'
elif ANGKO >= 70:
    KONVERSI_HURUF = 'B'
elif ANGKO >= 60:
    KONVERSI_HURUF = 'C'
elif ANGKO >= 50:
    KONVERSI_HURUF = 'D'
else:
    KONVERSI_HURUF = 'E'

print(f"Output: {KONVERSI_HURUF}")