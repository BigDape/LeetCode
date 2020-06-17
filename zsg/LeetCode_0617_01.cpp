#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(curr,res,1,n,k);
        return res;
    }
    void backtrack(vector<int>& curr, vector<vector<int>>& res,int m,int target,int k) {
        if (target < 0) {
            return;
        }
        else if (target == 0) {
            if (curr.size() == k) {
                res.emplace_back(curr);
            }
            return;
        }
        for (int i = m; i < 10; i++) {
            curr.emplace_back(i);
            backtrack(curr,res,i+1,target-i,k);
            curr.pop_back();
        }
    }
};