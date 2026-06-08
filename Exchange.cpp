#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>

using namespace std;

int a[1000000];

int main() {
    
    for (int i = 0; i < 1000000; i++) {
        a[i] = i + 1;
    }

    srand(time(NULL));

    for (int i = 999999; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(a[i], a[j]);
    }

    int n = sizeof(a) / sizeof(a[0]); 

    cout << "Sebelum disorting\n\n";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " " ;
    }

    cout << endl;

    cout << "\n\nSesudah disorting: \n\n";

    auto start = chrono::high_resolution_clock::now();

    for (int i = 0 ; i < n - 1 ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            if (a[i] > (a[j])) {
                swap(a[i], a[j]);
            }
        }
    }

    auto stop = chrono::high_resolution_clock::now();

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "\n\nWaktu eksekusi: " << duration.count() << " Mikrodetik atau " << duration.count() / 1000000 << " Detik.";

    return 0;

}

// Percobaan di spek laptop i7 13620h, Axioo Pongo 735
// Bubble Sort 100 ribu data didapatkan hasil eksekusi 31 detik
// Sedangkan 1 juta memerlukan 906 detik
// Kompleksitas waktunya adalah O(n^2), karena nested loop algoritma perlu 2 kali lipat memeriksa
// Secara teori, algoritma O(n^2) akan membutuhkan waktu sekitar X^2 kali lebih besar ketika ukuran input dinaikkan X kali. Ketika data sudah lebih besar dari kapasitas cache CPU, performa bisa memburuk lebih jauh karena banyak cache miss dan akses ke RAM yang latensinya jauh lebih tinggi.