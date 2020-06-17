#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int N = nums.size();
        if (N == 0)
            return 0;
        vector<unsigned long long> dp(target+1,0);
        dp[0] = 1;
        for (int i = 1; i <= target; i++) {
            for (int j = 0; j < N; j++) {
                dp[i] += (i - nums[j] >= 0) ? dp[i - nums[j]] : 0;
            }
        }
        return dp[target];
    }  
};