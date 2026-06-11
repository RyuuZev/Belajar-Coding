#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 67;
}

int main () {

    int target;
    vector<int> Arrayz = {1, 2, 3, 4, 5};

    cout << "Arrayz : ";

    for (int x : Arrayz) {
        cout << x << " ";
    }

    cout << "\nCari index: "; cin >> target;

    auto start = chrono::high_resolution_clock::now();
    int hasil = binarySearch(Arrayz, target);
    auto stop = chrono::high_resolution_clock::now();
    int hasilElemen = binarySearch(Arrayz, target) + 1;

    chrono::duration<double, milli> duration = stop - start;

    cout << "\nAngka " << target << " yang Anda cari ada pada elemen ke-" << hasilElemen;
    cout << "\nAngka " << target << " yang Anda cari ada pada index ke-" << hasil;
    cout << "\nWaktu eksekusi : " << duration.count() << " ms.";

    return 0;

}