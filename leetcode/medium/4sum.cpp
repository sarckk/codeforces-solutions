#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return {};
        // -2, -1, 0, 0, 1, 2
        // (4+3+2) + (3+2) + 2
        // n = 5
        // sum from 2 to n-1
        // sum from 2 to n-2
        // sum from 2 to n-3 
        // so on until n-x == 2
        // (n-2) * (n/2 (1 + n))
        // (n-2) * (n + n^2)/2
        sort(nums.begin(), nums.end());
        
        set<vector<int>> res { };
        
        for(int start = 0; start < nums.size() - 3; start++) {
            for(int second = start + 1; second < nums.size() - 2; second++) {
                if(auto rest = two_sum(nums, second + 1, target-nums[start]-nums[second])) {
                    vector<pair<int,int>> thirdAndFourth = *rest;
                    for(auto& t : thirdAndFourth) {
                        res.emplace(initializer_list<int>{
                            nums[start],
                            nums[second],
                            nums[t.first],
                            nums[t.second]
                        });
                    }
                    
                }
            }
        }
        
        return vector<vector<int>>(res.begin(), res.end());
    }
    
    optional<vector<pair<int, int>>> two_sum(vector<int>& nums, int start, int target) {
        vector<pair<int,int>> res{};
        int s = start;
        int e = nums.size()-1;
        
        while(s < e) {
            int sum = nums[s] + nums[e];
            if(sum < target) { s++; }
            else if(sum > target)  { e--; }
            else { res.push_back(make_pair(s,e)); s++; e--;}
        }
        if(res.empty()) return {};
        return res;
    }
};
