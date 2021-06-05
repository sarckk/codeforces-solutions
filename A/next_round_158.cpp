#include <iostream>

#define rep(n) for(int ii = 0; ii < n; i++)

int main() {
    int n, k;
    std::cin >> n >> k;
    int count = 0;
    int kth_score = 0;

    for(int i = 0; i < n; i++){
        int c;
        std::cin >> c;
        if(c == 0) break;
        if(i + 1 == k) kth_score = c; 
        if(kth_score != 0 && c < kth_score) break;
        count++;
    }
    std::cout << count <<  "\n";
}
