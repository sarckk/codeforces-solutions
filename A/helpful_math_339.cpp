#include <iostream>

int main(){ 
    int counts[3]{};
    int n = 0;
    char c;
    while(std::cin >> c)  {
        counts[(c-'0')-1]++;
    }
    bool printed {false};
    for(int i = 0, j = 0; i < 2 || counts[i] > 0; (counts[i]--) == 0 && i++, j++)  {
        if(counts[i] == 0) continue;
        if(printed) std::cout << '+';
        std::cout << (i+1);
        printed = true;
    }
}
