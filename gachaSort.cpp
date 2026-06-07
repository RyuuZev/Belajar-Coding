#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>
#include <chrono>

using namespace std;

// Fungsi mengecek apakah array sudah terurut
bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

int main() {
    std::vector<int> data = {8, 7, 6, 5, 4, 3, 2, 1};

    std::cout << "Data sebelum disorting: " ;
    for (int x : data) {
        std::cout << x << " ";
    }
    
    std::cout << endl;

    // Generator angka acak
    std::random_device rd;
    std::mt19937 g(rd());

    long long attempts = 0;
    auto start = std::chrono::high_resolution_clock::now();

    std::cout << "Memulai Gacha Sort..." << std::endl;

    // Loop utama Gacha Sort
    while (!isSorted(data)) {
        std::shuffle(data.begin(), data.end(), g);
        attempts++;

        // Menampilkan progress real-time
        auto current_time = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = current_time - start;

        std::cout << "\rPercobaan: " << attempts 
                  << " | Waktu: " << elapsed.count() << "s" << std::flush;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> final_time = end - start;

    std::cout << "\n\nSorting Selesai!" << std::endl;
    std::cout << "Total Attempts: " << attempts << std::endl;
    std::cout << "Total Waktu: " << final_time.count() << " detik" << std::endl;
    
    std::cout << "Hasil akhir: ";
    for (int n : data) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}