#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> values{};
    int val; 
    int theirs = 0;
    for(int i = 0; i < n; i++) {
        std::cin >> val;
        values.push_back(val);
        theirs += val;
    }

    std::sort(values.begin(), values.end(), std::greater<int>());
    int ans = 0;
    int mine = 0;
    for(; ans < n; ans++) {
        mine += values[ans];
        theirs -= values[ans];
        if(mine > theirs) break;
    }
    std::cout << ans+1;
}
