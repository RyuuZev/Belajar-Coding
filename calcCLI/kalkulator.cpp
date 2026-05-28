#include "kalkulator.h"
#include <iostream>

double tambah(double x, double y) {
    return x + y;
}

double kurang(double x, double y) {
    return x - y;
}

double kali(double x, double y) {
    return x * y;
}

double bagi(double x, double y) {
    if (y == 0) {
        std::cout << "Angka tidak bisa dibagi " ;
        return 0;
    }
    return x / y;
}

