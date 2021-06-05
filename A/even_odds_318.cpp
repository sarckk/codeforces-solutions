#include <iostream>

int main() {
    long long n, k;
    std::cin >> n >> k;
    long long num_odds = n % 2 == 0 ? n/2 : n/2 + 1;
    long long ans = k > num_odds ? 2 + (k-num_odds-1)*2 : 1 + (k-1)*2;
    std::cout << ans;
}
