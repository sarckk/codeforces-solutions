#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> current;
        recursive(candidates, target,current, &res, 0);
        return res;
        // 1 1 2 5 6 7 10
    }
    
    void recursive(vector<int>& candidates, int target, vector<int>& current, vector<vector<int>>* res, int begin) {
        if(target < 0) return;
        if(target == 0) {
            res->push_back(current);
            return;
        }
        
        for(int i = begin; i < candidates.size(); ++i) {
            if(i==begin || candidates[i] != candidates[i-1]) {
                current.push_back(candidates[i]);
                recursive(candidates, target-candidates[i], current, res, i+1);
                current.pop_back();
            }
        }
    }
};


