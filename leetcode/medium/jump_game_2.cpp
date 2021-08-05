#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int* jumps {new int[nums.size()]{}};
        int minJumps = 0;
        jumps[0] = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) continue;
            for(int j = 1; j <= nums[i] && i+j < nums.size(); j++) {
                jumps[i+j] = jumps[i+j] == 0 ? jumps[i] + 1 : min(jumps[i] + 1, jumps[i+j]);
            }
        }
        
        return jumps[nums.size()-1];
    }
};
