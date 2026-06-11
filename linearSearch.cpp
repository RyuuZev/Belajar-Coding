#include <iostream>

using namespace std;

int linearSearch(string arr[], int n, string target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {

    string p1[] = {"Abrar", "Rama", "Dhani", "Dilon", "Rama", "Rifky"};
    int n = size(p1);

    cout << "Orang orang di Paralel 1: ";
    for (const string& x : p1) {
        cout << x << ", ";
    }

    string target;
    cout << "\nMasukkan nama orang yang Anda ingin ketahui letak indexnya: ";
    cin >> target;

    int hasil = linearSearch(p1, n, target);

    if (hasil != -1) {
        cout << "Nama " << target << " ditemukan pada index ke-" << hasil << endl;
    } else {
        cout << "Nama " << target << " tidak ditemukan dalam index." << endl;
    };

    return 0;
}