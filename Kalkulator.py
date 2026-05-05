print("=== KALKULATOR CLI ===")

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
        return "apa cona"

a = float(input("angka 1: "))
op = input("Operator: ")
b = float(input("angka 2: "))

hasil = hitung(a, op , b)

print("Nih hasilnya: ",hasil)
