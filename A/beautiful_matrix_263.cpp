#include <iostream>
#include <array>

int main () {
    std::array count = {0,0,0};
    int a;
    char b;
    while(;std::cin>>a;) {
        count[a]++;
        std::cin.ignore(1, '\n');
    }

    int i = 1;
    int l = count.size()
    while(i <= l) {
        count[i]--;
        if(count[i] != 0) {
            std::cout << i-1 << (count[i] && i==l-1) ? "+" : "";
        }
        if(count[i] == 0) { i++; }
    }
}
