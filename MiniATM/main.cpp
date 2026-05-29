#include "function.h"
#include <iostream>
#include <cstdio>
#include <thread>
#include <chrono>
using namespace std;

int main () {    

    char fitur;
    long long saldo_user = 100000;
    
    do {

    cout << KUNING << "\n=== MINI ATM versi CLI ===" << RESET << endl;
    cout << "Program ini merupakan simulasi ATM versi simpelnya" << endl;
    cout << "Silahkan pilih layanan yang kamu butuhkan dengan mengetik nomor di bawah" << endl;
    cout << KUNING << "\n=== MENU ATM ===" << RESET << endl;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Setor Tunai" << endl;
    cout << "3. Tarik Tunai" << endl;
    cout << MERAH << "4. Keluar" << RESET << endl;

    cout << "\nPilih menu : ";
    cin >> fitur;

    switch (fitur) {
        case '1':
            cekSaldo(saldo_user);
            break;
        case '2':
            setorTunai(saldo_user);
            break;
        case '3':
            tarikTunai(saldo_user);
            break;
        case '4':
            std::cout << "Terima kasih sudah menggunakan layanan kami!" << endl;
            std::this_thread::sleep_for(chrono::seconds(1));
            break;
        default:
            std::cout << MERAH << "Tidak Valid, silahkan pilih 1-4!";
            break;
    }

    } while (fitur != '4');


    return 0;
}