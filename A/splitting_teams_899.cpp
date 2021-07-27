#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, s;
    cin >> n;
    int one_count=0;
    int two_count=0;
    while(n--) {
        cin >> s;
        if(s==1) one_count++;
        else two_count++;
    }
    int res = 0;
    while(one_count && two_count) {
        one_count--; two_count--;
        res++;
    }
    cout << res + one_count/3;
}
