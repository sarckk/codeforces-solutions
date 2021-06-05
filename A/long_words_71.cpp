#include <iostream>
#include <string>

int main() {
    int lineCount;
    std::cin >> lineCount;
    std::cin >> std::ws;
    std::string line{};

    for(int  i = 0; i < lineCount; i++) {
        // read line
        std::getline(std::cin, line);
        if(line.length() > 10) {
            std::cout << line.at(0) << line.length() - 2 << line.back() << "\n";
        } else {
            std::cout << line << "\n";
        }
    }
}
