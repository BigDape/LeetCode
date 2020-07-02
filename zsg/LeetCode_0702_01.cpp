#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,0));
        sort(coins.rbegin(),coins.rend());
        for (int i = 0; i <= amount; i++) {
            dp[0][i] = 0;
        }
        for (int i = 0; i <= coins.size(); i++) {
            dp[i][0] = 1;
        }
        for (int i = 1; i <= coins.size(); i++) {
            for (int j = 1; j <= amount; j++) {
                    dp[i][j] = j - coins[i-1] >= 0?dp[i][j - coins[i-1]] + dp[i - 1][j]: dp[i - 1][j];
            }
        }
        return dp[coins.size()][amount];
    }
};

int main() {
    int amount = 5;
    vector<int> coins = {1,2,5};
    Solution ss;
    ss.change(amount,coins);
    return 0;
}