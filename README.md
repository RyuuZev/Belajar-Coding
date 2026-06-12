# Belajar-Coding

Koleksi latihan dan contoh program untuk belajar pemrograman — fokus utama: C++, juga ada JavaScript, Java, dan Python.

Tujuan
- Menyimpan contoh kode sederhana dan algoritma supaya mudah dipelajari dan dicari kembali.
- Menjadi catatan pembelajaran jangka panjang: setiap contoh harus cukup jelas untuk dipahami nanti.

Struktur (sekilas)
- Root: banyak file contoh (algoritma, struktur data, program kecil).
- Direktori contoh: `Binary/`, `Java/`, `MiniATM/`, `TebakAngka/`, `calcCLI/`.

Panduan menjalankan contoh
- C++
  - Kompilasi satu file:
    ```bash
    g++ -std=c++17 -O2 NamaFile.cpp -o NamaFile
    ./NamaFile
    ```
  - Jika program memakai beberapa file, kompilasi semua sumber yang diperlukan:
    ```bash
    g++ -std=c++17 -O2 *.cpp -o run_all
    ./run_all
    ```
- JavaScript
  - Jalankan dengan Node.js:
    ```bash
    node file.js
    ```
- Java
  - Kompilasi dan jalankan:
    ```bash
    javac NamaFile.java
    java NamaFile
    ```
- Python
  - Jalankan dengan Python 3:
    ```bash
    python3 Kalkulator.py
    ```

Aturan kontribusi (untuk kamu sendiri atau orang lain)
- Tujuan repo: belajar — prioritaskan contoh yang jelas dan mudah dimengerti.
- Penamaan file: pakai nama yang menjelaskan fungsinya (mis. `binarySearch.cpp`, `SelectionSort.cpp`).
- Setiap folder baru: tambahkan `README.md` kecil yang menjelaskan isinya.
- Commit message singkat dan jelas: `add: binary search example` atau `fix: bug in selection sort`.
- Sebelum merge: testing manual (compile/run) dan komentar singkat di kode.

Catatan untuk jangka panjang
- Jangan archive repo jika masih ingin menambah atau menerima PR. Jika ingin menandai snapshot, gunakan tag/release.
- Pertimbangkan menambahkan `LICENSE` (mis. MIT) kalau ingin orang lain bebas memakai kodenya.
- Tambahkan deskripsi di bagian atas repo (Settings → About) dan topik/tag seperti: `learning`, `tutorial`, `algorithms`, `beginner`.

Kontak
- Pemilik: @RyuuZev

--
README ini saya perbarui supaya repo lebih berguna sebagai catatan belajar jangka panjang. Kalau mau, saya bisa:
- Tambahkan template CONTRIBUTING.md dan ISSUE_TEMPLATE untuk memperjelas cara kontribusi.
- Menambahkan LICENCE (MIT) jika kamu setuju.
- Merapikan folder (mis. memindahkan file terkait ke subfolder `Algorithms/` dll.).

Mau saya lakukan langkah selanjutnya yang mana?