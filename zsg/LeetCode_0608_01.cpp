#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int i = 1;
        int j = numbers.size();
        while (i < j) {
            int sum = numbers[i-1] + numbers[j-1];
            if (sum < target) {
                i++;
            }
            else if (sum > target) {
                j--;
            }
            else {
                res.emplace_back(i);
                res.emplace_back(j);
                return res;
            }
        }
        return res;
    }
};