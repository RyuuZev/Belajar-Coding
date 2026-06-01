#include <iostream>
using namespace std;

int main() {
    
    int a[100] = {71, 12, 95, 38, 4, 83, 27, 60, 19, 99, 46, 7, 54, 31, 88, 15, 73, 2, 67, 42, 91, 24, 58, 10, 79, 35, 97, 51, 18, 64, 29, 85, 6, 75, 40, 22, 93, 48, 13, 56, 81, 33, 100, 17, 69, 44, 8, 62, 26, 89, 52, 3, 77, 36, 94, 20, 65, 11, 84, 47, 30, 72, 5, 59, 23, 98, 41, 14, 86, 53, 1, 68, 32, 90, 25, 57, 16, 80, 43, 9, 74, 37, 96, 21, 63, 28, 87, 50, 34, 82, 45, 66, 39, 92, 55, 70, 49, 76, 61, 78};

    int n = sizeof(a) / sizeof(a[0]); 

    cout << "Sebelum disorting\n\n";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " " ;
    }

    cout << endl;

    cout << "\n\nSesudah disorting: \n\n";

    for (int i = 0 ; i < n - 1 ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            if (a[i] > (a[j])) {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;

}

