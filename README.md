# Belajar-Coding

Kumpulan latihan dan contoh kode untuk belajar pemrograman. Kebanyakan C++ (algoritma & contoh), juga ada beberapa file JavaScript, Java, dan Python. Saya pakai repo ini sebagai catatan pribadi — tapi siapa saja boleh pakai.

Daftar isi
- [Ringkasan](#ringkasan)
- [Cara menjalankan contoh](#cara-menjalankan-contoh)

---

## Ringkasan
Repo ini berisi banyak program pendek untuk latihan: implementasi algoritma dasar (sorting, search), contoh penggunaan pointer/class di C++, program kecil (mis. MiniATM), dan beberapa skrip JS/Python. Tujuannya supaya gampang ulangi dan cari contoh saat belajar.

## Cara menjalankan contoh
- C++ (misal `SelectionSort.cpp`):

```bash
# kompilasi
g++ -std=c++17 -O2 SelectionSort.cpp -o SelectionSort
# jalankan
./SelectionSort
```

- Jika lebih dari satu file di-compile sekaligus:

```bash
g++ -std=c++17 -O2 main.cpp function.cpp -o program
./program
```

- JavaScript:

```bash
node file.js
```

- Java:

```bash
javac NamaFile.java
java NamaFile
```

- Python:

```bash
python3 Kalkulator.py
```



---
