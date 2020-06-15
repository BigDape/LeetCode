#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(res,curr,1,n,k);
        return res;
    }
    void backtrack(vector<vector<int>>& res, vector<int>& curr, int m,int n,int k) {
        if (m == k+1) {
            res.emplace_back(curr);
            return;
        }
        for (int i = m; i < n; i++) {
            curr.push_back(i);
            backtrack(res,curr,i+1,n,k);
            curr.pop_back();
        }
    }
};

int main() {
    Solution ss;
    ss.combine(4,2);
}