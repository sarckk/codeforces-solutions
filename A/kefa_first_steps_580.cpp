#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int start = 0, prev = 0;
    int c, l = 0;
    for(int i = 0; i < n; i++){
        std::cin >> c;
        if(c < prev || (c>=prev && i==n-1)) {
            int length = c < prev ? i-start : i-start+1;
            if(length > l) l = length;
            start = i;
        } 
        prev = c;
    }
    std::cout << l;
}
