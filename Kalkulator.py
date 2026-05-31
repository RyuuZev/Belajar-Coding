print("=== KALKULATOR CLI ===")
print("Kalkulator berbasis terminal")
print("Pilih operator (+, -, *, /) untuk operasi matematika yang diinginkan")
print("(+) untuk menambahkan angka")
print("(-) untuk mengurangkan angka")
print("(*) untuk mengalikan angka")
print("(/) untuk membagi angka\n")

# fungsi untuk menghitung
def hitung(a, op, b):
    if op == "+":
        return a + b
    elif op == "-":
        return a - b
    elif op == "*":
        return a * b
    elif op == "/":
        return a / b if b != 0 else "error jir"
    else:
        return "apalah yang bener milihnya"

# looping 
while True:
    try:

        a = float(input("\nMasukkan angka pertama    : "))
        b = float(input("Masukkan angka kedua      : "))
        op = str(input("Masukkan Operator (+, -, *, /) : "))

        hasil = hitung(a, op , b)
        print(f"Hasil dari {a} {op} {b} = {hasil}")
    
    except ValueError:
        print("Input harus berupa angka ya!")

    while True:
        konfirmasi = input("\nApakah ingin lanjut? (y/n) : ").lower().strip()

        if konfirmasi == 'y' or konfirmasi == 'n':
            break
        else:
            print("Pilih yang bener! ya(y) atau tidak(n)")

    if konfirmasi == 'n' :
        print("Terima kasih sudah menggunakan kalkulator CLI!")
        break