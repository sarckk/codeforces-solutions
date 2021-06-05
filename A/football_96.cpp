#include <iostream>
#include <cstring>

int main() {
    char s[101]; std::cin >> s;
    std::cout << ((strstr(s, "1111111") || strstr(s, "0000000")) ? "YES\n" : "NO\n");
}
