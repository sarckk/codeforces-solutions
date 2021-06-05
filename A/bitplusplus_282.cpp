#include <iostream>
#include<string>

int main() {
    int n;
    std::cin >> n;
    std::string line{}; 
    int x = 0;
    while(n--) {
        std::cin >> line;
        int l = line.length(); 
        if(line[0] == '+' || line[l-1] == '+') x++;
        else x--;
    }
    std::cout << x << "\n";
}
