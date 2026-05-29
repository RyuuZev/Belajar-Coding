#ifndef function_h
#define function_h
#include <iostream>
using namespace std;

    const string RESET = "\033[0m";
    const string KUNING = "\033[33m";
    const string MERAH = "\033[31m";
    const string HIJAU = "\033[32m";

void cekSaldo(long long saldo_user);
void setorTunai(long long &saldo_user);
void tarikTunai(long long &saldo_user);

#endif