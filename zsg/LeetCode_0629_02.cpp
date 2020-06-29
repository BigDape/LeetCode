#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int N = nums.size();
        vector<int> dp;
        dp.push_back(0);

        int res = INT_MIN;
        for (int i = 1; i <= N; i++) {
            dp.push_back(max(dp[i - 1], 0) + nums[i - 1]);
            res = max(res,dp[i]);
        }
        return res;
    }
};