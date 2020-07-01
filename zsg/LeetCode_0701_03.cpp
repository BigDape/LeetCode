#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long long> dp(target + 1,0);
        dp[0] = 1;
        for (int i = 1; i <= target; i++) {
            for (int c : nums) {
                    dp[i] += (i - c)>=0?dp[i - c]:0;
            }
        }
        return dp[target];
    }
};