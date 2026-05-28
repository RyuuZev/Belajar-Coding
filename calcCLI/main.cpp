#include "kalkulator.h"
#include <iostream>
using namespace std;

int main() {

    double angka1, angka2;
    char operasi;

    std::cout << "=== KALKULATOR CLI ===" << endl;
    std::cout << "Ini adalah sebuah kalkulator CLi alias berbasis perintah doang" << endl;
    std::cout << "Operator (+) untuk menambah angka" << endl;
    std::cout << "Operator (-) untuk mengurang angka" << endl;
    std::cout << "Operator (*) untuk mengkali angka" << endl;
    std::cout << "Operator (/) untuk membagi angka" << endl;
    std::cout << "Note: angka 0 tidak bisa dibagi" << endl << endl;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1 ;
    
    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    std::cout << "Masukkan operator: ";
    std:: cin >> operasi;

    std::cout << "Hasilnya: ";

    switch (operasi) {
        case '+':
            std::cout << tambah(angka1, angka2) << endl;
            break;
        case '-':
            std::cout << kurang(angka1, angka2) << endl;
            break;
        case '*':
            std::cout << kali(angka1, angka2) << endl;
            break;
        case '/':
            std:: cout << bagi(angka1, angka2) << endl;
            break;
        default:
            std::cout << "Operatornya salah kocak" << endl;
            break;
    }
    return 0;
}   