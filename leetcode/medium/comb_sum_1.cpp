#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> current;
        if(!candidates.size()) return res;
        sort(candidates.begin(), candidates.end());
        rec(candidates, target, current, res, 0);
        return res;
    }
    
    void rec(vector<int>& candidates, int target, vector<int>& current, vector<vector<int>>& res, int begin) {
        if(target < 0) return;
        if(target == 0) {
            res.push_back(current);
            return;
        }
        
        for(int i = begin; i < candidates.size(); i++) {
            current.push_back(candidates[i]);
            rec(candidates, target-candidates[i], current, res, i);
            current.pop_back();
        }
    }
};
