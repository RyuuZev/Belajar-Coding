#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>   
#include <chrono>   

bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void begoSort(std::vector<int>& arr) {
    std::random_device rd;
    std::mt19937 g(rd());

    unsigned long long attempts = 0;

    auto startTime = std::chrono::high_resolution_clock::now();

    while (!isSorted(arr)) {
        attempts++;
        std::shuffle(arr.begin(), arr.end(), g);
    }

    auto endTime = std::chrono::high_resolution_clock::now();

    auto durationMicro = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count();
    double durationSeconds = durationMicro / 1000000.0;

    std::cout << "\n[SUKSES] Array berhasil terurut!\n";
    std::cout << "Jumlah percobaan pengacakan : " << attempts << " kali\n";
    std::cout << "Waktu eksekusi              : " << durationMicro << " mikrodetik (" 
              << durationSeconds << " detik)\n";
}

int main() {
    std::vector<int> data = {1, 3, 4, 2, 5, 7, 6, 9, 8, 10, 12, 11}; 

    std::cout << "Data awal (" << data.size() << " elemen): ";
    for (int num : data) std::cout << num << " ";
    std::cout << "\n\nMenjalankan Begosort... \n";

    begoSort(data);

    std::cout << "Data sekarang               : ";
    for (int num : data) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}