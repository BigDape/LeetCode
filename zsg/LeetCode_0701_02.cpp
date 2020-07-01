#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0)
            return 0;
        sort(coins.rbegin(),coins.rend());
        int miniAns = INT_MAX;
        coinChangeIter(coins,amount,0,0,miniAns);
        miniAns = (miniAns == INT_MAX) ? -1 : miniAns;
        return miniAns;
    }
    void coinChangeIter(vector<int>& coins, int amount, int index, int count, int& miniAns) {
        if (amount == 0) {
            miniAns = count < miniAns ? count : miniAns;
        }
        if (index == coins.size())
            return;
        for (int maxCoinNum = amount / coins[index]; maxCoinNum >= 0 && maxCoinNum + count < miniAns; maxCoinNum--) {
            coinChangeIter(coins, amount - maxCoinNum * coins[index], index + 1, count + maxCoinNum, miniAns);
        }
    }
};