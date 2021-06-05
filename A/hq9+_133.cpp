#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss{line};
    char c;
    while(iss >> c) {
        if(c=='H' || c=='Q' ||  c=='9') {
            std::cout << "YES";
            std::exit(0);
        }
    }
    std::cout << "NO";
}
