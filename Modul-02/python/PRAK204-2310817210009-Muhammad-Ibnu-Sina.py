import math


def main():
    phi = 3.142857

    print("Input: ")
    r, t = map(float, input().split())

    volume = phi * r * r * t
    luas = 2 * phi * r * (r + t)
    keliling = 2 * phi * r

    print("Output: ")
    print(f"Volume : {volume:.2f}")
    print(f"Luas : {luas:.2f}")
    print(f"Keliling : {keliling:.2f}")


if __name__ == "__main__":
    main()
