# Belajar-Coding

Kumpulan latihan dan contoh kode untuk belajar pemrograman. Kebanyakan C++ (algoritma & contoh), juga ada beberapa file JavaScript, Java, dan Python. Saya pakai repo ini sebagai catatan pribadi — tapi siapa saja boleh pakai.

Daftar isi
- [Ringkasan](#ringkasan)
- [Cara menjalankan contoh](#cara-menjalankan-contoh)
- [Index contoh (singkat)](#index-contoh-singkat)
  - [Algorithms](#algorithms)
  - [Lainnya](#lainnya)
- [Contributing](#contributing)
- [Lisensi & kontak](#lisensi--kontak)

---

## Ringkasan
Repo ini berisi banyak program pendek untuk latihan: implementasi algoritma dasar (sorting, search), contoh penggunaan pointer/class di C++, program kecil (mis. MiniATM), dan beberapa skrip JS/Python. Tujuannya supaya saya (dan orang lain) gampang ulangi dan cari contoh saat belajar.

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
g++ -std=c++17 -O2 *.cpp -o run_all
./run_all
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

Catatan: beberapa file berisi input interaktif (prompt). Kalau mau, jalankan di terminal dan masukkan nilai sesuai instruksi di layar.

## Index contoh (singkat)
Di bawah ini ringkasan cepat file yang ada di root. Kalau nanti banyak, akan saya pindah ke folder `Algorithms/` dan buat sub-README per folder.

### Algorithms
- SelectionSort.cpp — C++ — selection sort, contoh sederhana. Level: Pemula
- bubbleSorting.cpp — C++ — bubble sort (generate random array). Level: Pemula
- binarySearch.cpp — C++ — binary search pada vector terurut. Level: Pemula
- linearSearch.cpp — C++ — linear search pada array string. Level: Pemula
- gachaSort.cpp — C++ — variasi sorting/eksperimen. Level: Pemula
- begoSort.cpp — C++ — implementasi "bego sort"/silly sort. Level: Pemula
- tanggaDP.cpp — C++ — contoh DP (cara naik tangga). Level: Pemula/Intermed
- DynamicP.cpp — C++ — contoh pemrograman dinamis (DP). Level: Pemula/Intermed
- pointer.cpp — C++ — contoh dasar pointer. Level: Pemula
- class.cpp — C++ — contoh kelas/objek sederhana. Level: Pemula
- restart.cpp / shutdown.cpp — C++ — contoh fungsi kecil (eksperimen). Level: Pemula
- Exchange.cpp — C++ — contoh program dengan input/format. Level: Pemula

> Catatan: daftar di atas adalah ringkasan singkat. Buka file untuk komentar dan cara pakainya.

### Lainnya
- Java/ — folder contoh Java (cek isinya)
- MiniATM/ — program simulasi ATM (folder)
- TebakAngka/ — permainan tebak angka (folder)
- calcCLI/ — kalkulator CLI (folder)
- Binary/ — (folder)
- array.js, function.js, ifelse.js, boolean.js, diskon.js, null.js, objek.js — contoh JS dasar
- Kalkulator.py — Python, kalkulator CLI
- Exchange.png — gambar terkait Exchange.cpp (contoh asset)

## Contributing
Panduan singkat ada di `CONTRIBUTING.md`. Intinya:
- Fork → buat branch `feat/<nama>` atau `fix/<nama>` → PR
- Gunakan C++17 untuk contoh C++
- Commit message singkat (mis. `add: binarySearch example`)

Kalau langsung mau kontribusi besar, buka issue dulu supaya kita diskusi scope.

## Lisensi & kontak
- Pemilik / kontak: @RyuuZev
- Saya belum menambahkan LICENSE di repo ini — kalau kamu mau pakai bebas, bisa tambahkan LICENSE (mis. MIT). Kalau mau, saya tambahkan.

---

Tambahan: saya bikin README ini supaya lebih gampang dipakai untuk jangka panjang. Kalau kamu mau, saya bisa susun TOC yang clickable (link antar bagian), ataupun buat file `Algorithms/README.md` yang lebih terperinci.
