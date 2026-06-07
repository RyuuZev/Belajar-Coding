#include <iostream>

using namespace std;

int linearSearch(int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {

    int arr[10] = {1, 3, 2, 4, 5, 6, 8, 7, 9, 10};
    int target;
    int n = size(arr);

    cout << "Array A : ";
    for (int x : arr) {
        cout << x << " ";
    }

    cout << "\nPilih angka: ";
    cin >> target;

    int hasil = linearSearch(arr, target, n);
    cout << "\nAngka yang anda pilih adalah index ke-" << hasil;

    return 0;
}