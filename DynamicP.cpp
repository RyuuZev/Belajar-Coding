#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int hitungLangkah(int n) {

    if (n <= 2) return n;

    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];

}

int main() {
    
    int n = 5;
    cout << "Cara mencapai anak tangga ke-" << n << " adalah: " << hitungLangkah(n) << endl;
    return 0;
}