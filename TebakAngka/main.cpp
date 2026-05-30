#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <chrono>
#include <ctime>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(0)));

    int angkaRahasia = (rand() % 100) + 1;
    int tebakan;
    char konfirmasi;

    cout << "=== Game tebak angka (1-100) ===" << endl;
    cout << "Jika angka yang ditebak terlalu besar dari target akan meghasilkan kata 'Terlalu Besar'" << endl;
    cout << "dan sebaliknya jika lebih kecil dari target akan menghasilkan 'Terlalu Kecil'" << endl;

    do {

        cout << "\n\nMasukkan angka: "; cin >> tebakan;

        if (tebakan > angkaRahasia) {
            cout << "Terlalu besar!";
        } else if (tebakan < angkaRahasia) {
            cout << "Terlalu kecil1";
        } else if (tebakan == angkaRahasia) {
            cout << "Tebakan Benar!" << endl;
            cout << "\nApakah ingin main lagi? (y/n): "; cin >> konfirmasi;
            angkaRahasia = (rand() % 100) + 1;
        } else {
            cout << "Angka tidak valid";
        }
 
    } while (konfirmasi != 'n');


    return 0;
}