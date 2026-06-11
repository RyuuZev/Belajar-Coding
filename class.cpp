#include <iostream>
#include <vector>

using namespace std;

class Mahasiswa {
    private:
    string nama;
    string jurusan;

    public:
    long long nim;

    Mahasiswa(string nm, string jrsn, long long id) {
        nama = nm;
        jurusan = jrsn;
        nim = id;
    }

    int tampilMahasiswa(long long inputNIM) {
        if (inputNIM == nim) {
            cout << "Mahasiswa dengan NIM " << nim << " bernama " << nama << " dengan jurusan " << jurusan << endl;
            return 1;
        }
        return 0;
    }


};

int main() {

    long long inputNIM;
    bool ketemu = false;

    vector<Mahasiswa> listMahasiswa = {
    Mahasiswa("Muhammad Kurniawan Pasya", "Teknologi Informasi", 2510817210026),
    Mahasiswa("Axioo Pongo", "Teknologi Informasi", 2510817210098),
    Mahasiswa("Muhammad Ramadhani Ramadhan", "Teknologi Informasi", 2510817210098),
    Mahasiswa("Voicemeeter Banana Lazy", "Teknologi Informasi", 2510817530098),
    Mahasiswa("Rizky Xiaomi", "Teknologi Informasi", 2510817360098),
    Mahasiswa("Aqua Teknologi", "Teknologi Informasi", 2510817240098)
    };

    cout << "Masukkan NIM yang ingin dicari: " ;
    cin >> inputNIM;

    for (auto mhs : listMahasiswa) {
        if (mhs.tampilMahasiswa(inputNIM) == 1) {
            ketemu = true;
        }
    }

    if(!ketemu) {
        cout << "NIM tidak ditemukan!" << endl;
    }

    return 0;

}