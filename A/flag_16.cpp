#include <bits/stdc++.h>

using namespace std;

int n,m;
char c;
int main() {
    int prev_row_c = -1;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int prev_col_c = -1;
        for(int j = 0 ; j < m; j++) {
            cin >> c;
            if((prev_row_c != -1 && c == prev_row_c) || (prev_col_c != -1 && c != prev_col_c)) {
                cout << "NO";
                return 0;
            }
            prev_col_c = c;
        }
        prev_row_c = c;
    }
    cout << "YES";
}
