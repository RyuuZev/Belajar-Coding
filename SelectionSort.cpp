#include <iostream>
#include <chrono>

using namespace std;

int main() {

    int arr[] = {1, 3, 4, 2, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum disorting: " ;

    for (int i = 0; i < n; i++) {
        cout << arr [i] << " ";
    }

    cout << endl;

    cout << "Array sesudah disorting: ";

    auto start = chrono::high_resolution_clock::now();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap (arr[i], arr[j]);
            }
        }
    }

    auto stop = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }

    cout << "\nWaktu Eksekusi: " << duration.count() << " mikrodetik atau " << duration.count() / 1000000 << " Detik.";




}