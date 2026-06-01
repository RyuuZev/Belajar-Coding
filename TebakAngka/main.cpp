#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <chrono>
#include <ctime>
#include <limits>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(0)));

    int angkaRahasia = (rand() % 100) + 1;
    int tebakan;
    int hitungPercobaan = 0;
    int totalPercobaan = 0;
    int totalMenang = 0;
    char konfirmasi = 'y';

    cout << "===== Game tebak angka (1-100) =====" << endl;
    cout << "Jika angka yang ditebak terlalu besar dari target akan meghasilkan kata 'Terlalu Besar'" << endl;
    cout << "dan sebaliknya jika lebih kecil dari target akan menghasilkan 'Terlalu Kecil'" << endl;

    do {

        try{
            cout << "\n\nMasukkan angka: "; cin >> tebakan;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw string("Input harus berupa angka!");
            }
            totalPercobaan++;
            hitungPercobaan++;

            if (tebakan > angkaRahasia) {
                cout << "Terlalu besar!";
            } else if (tebakan < angkaRahasia) {
                cout << "Terlalu kecil!";
            } else if (tebakan == angkaRahasia) {
                cout << "Tebakan Benar!" << endl;
                cout << "Anda berhasil menebak dalam " << hitungPercobaan << " kali percobaan.\n";
                totalMenang++;

                cout << "\nApakah ingin main lagi? (y/n): "; 
                cin >> konfirmasi;
            }

            if (konfirmasi != 'n') {
                hitungPercobaan = 0;
                angkaRahasia = (rand() % 100) + 1;
            }

        } catch (const string& pesanError) {
            cout << pesanError << endl;
        }
        
    } while (konfirmasi != 'n');

    cout << "\n===================================" << endl;
    cout << "          GAME OVER                " << endl;
    cout << "===================================" << endl;
    cout << "Total seluruh tebakan : " << totalPercobaan << " kali" << endl;
    cout << "Total game yang dimenangkan : " << totalMenang << " kali" << endl;
    cout << "Terima Kasih sudah bermain!" << endl;
    
    std::cin.ignore(100, '\n');
    std::cout << "Tekan Enter untuk keluar ...";
    std::cin.get();

    return 0;
}