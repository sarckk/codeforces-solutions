#include <bits/stdc++.h>

using namespace std;
int n;

int main () {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <=5; j++) {
            cin >> n;
            if(n == 1) cout << std::abs(3-i) + std::abs(3-j);
        }
    }
}
