#include "function.h"
#include <locale.h>

void cekSaldo(long long saldo_user) {
    
    std::cout << HIJAU << "Saldo Anda saat ini : Rp " << saldo_user << RESET << std::endl;
    std::cin.ignore(100, '\n');
    std::cout << "Tekan Enter untuk lanjut...";
    std::cin.get();
}

void setorTunai(long long &saldo_user) {
    long long tunai;
    std::cout << "Silahkan masukkan nilai tunai yang anda ingin setor: Rp ";
    std::cin >> tunai;
    saldo_user += tunai;

    std::cout << "Setor tunai berhasil!\n";
}

void tarikTunai(long long &saldo_user) {
    long long tunai;
    std::cout << "Silahkan masukkan nilai tunai yang Anda ingin tarik: Rp ";
    std::cin >> tunai;

    if (tunai > saldo_user) {
        std::cout << "Tidak bisa menarik tunai! Saldo yang ingin anda tarik melebihi saldo Anda yang sekarang\n";
        return;
    }
    saldo_user -= tunai;

    std::cout << "Tarik tunai berhasil! Anda telah menarik tunai sebesar Rp " << tunai << endl;
}