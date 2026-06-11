#include "binary.h"
#include <vector>

int main() {

    vector<int> Arrayz = {1,2,3,4,5};
    int target;

    cout << "Isi Array: ";

    for (int x : Arrayz) {
        cout << x << " ";
    }

    cout << "\nCari array : ";
    cin >> target;

    int hasil = binarySearch(Arrayz, target);

    cout << "\nTarget " << target << " yang anda cari ada pada index ke-" << hasil;

    return 0;

}