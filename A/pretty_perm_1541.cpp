#include<bits/stdc++.h>
using namespace std;
int t,n;
int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n - 2; i+=2) {
            cout << i + 1 << ' ';
            if(i+1 <= n-2) cout << i << ' ';
        }
        if(n % 2 != 0) cout << n << ' ' << n-2;
        else  cout << n << ' ' << n-1;
        cout << '\n';
    }
}
