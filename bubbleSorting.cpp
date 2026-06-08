#include <iostream>
#include <chrono>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isSorted(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}

void bubbleSort(int a[], int n) {
    while (!isSorted(a, n)) {
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                swap (a[i], a[i + 1]);
            }
        }

    }
}

int main() {

    srand(time(NULL));

    const int SIZE = 100;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = (rand() % SIZE) + 1;
    }

    int n = size(arr);

    cout << "Array sebelum disorting: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nArray setelah disorting: ";

    auto start = chrono::high_resolution_clock::now();
    bubbleSort(arr, n);
    auto stop = chrono::high_resolution_clock::now();

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    chrono::duration<double, milli> duration = stop - start;

    cout << "\n\nWaktu Eksekusi: " << fixed << setprecision(4) << duration.count() << " ms.\n";

    return 0;

}