class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        // numRows = 3
        // 0 4 8 12  +4
        // 1 3 5 7 9 11 13 +2
        // 2 6 10 <14> +4 -> 3 + 1
        
        // numRows = 4
        // 0 6 12 ... + 6
        // 1 5 7 12 14
        // 2 4 8 10 
        // 3 9  ... + 6 -> numRows + numRows-2 
        
        
        // 2 * (numRows-1-rowIndex) --> for down to up 
        // 2 * rowIndex --> up to down 
        
        // 1st and last rows are going to be separated by numRows + numRows-2
        // 1st row starts from 0, last row starts from numRows - 1 
        
        string ans;
        int N = s.length();
        
        for(int i = 0; i < N; i+=(numRows + numRows-2)) {
            ans += s.at(i);
        }
        
        for(int row = 1; row < numRows-1; row++)  {
            // for each row in-between
            bool downToUp = true;
            for(int i = row; i < N; i+= 2 * (downToUp ? numRows-1-row : row), downToUp = !downToUp) {
                ans += s.at(i);
            }
        }
        
        for(int i = numRows - 1;  i < N; i+=(numRows + numRows-2)) {
            ans += s.at(i);
        }
        
        return ans;
    }
};
