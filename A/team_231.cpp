#include <iostream>
#include <algorithm>
#include <string>

int main(){
    int c;
    std::cin >> c;
    std::string line;
    int answered = 0;

    for(int i = 0; i < c; i++) {
        std::getline(std::cin >> std::ws , line);
        if(std::count(line.begin(), line.end(), '1') >= 2) {
            answered++;
        }
    }

    std::cout << answered << "\n";

    return 0;
}
