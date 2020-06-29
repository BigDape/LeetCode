#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int> res;
        int x = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                res.push_back(x);
                x = 0;
            }
            if (nums[i] == 1) {
                x++;
            }
        }
        res.push_back(x);
        if (res.size()==1)//ȫ1
            return x - 1;
        vector<int> dd;
        for (int i = 0; i < res.size() - 1; i++) {
            dd.push_back(res[i] + res[i + 1]);
        }
        int mx = INT_MIN;
        for (int i = 0; i < dd.size(); i++) {
            if (dd[i] > mx)
                mx = dd[i];
        }
        return mx;
    }
};

int main() {
    vector<int> nums = {1,1,0,1};
    Solution ss;
    ss.longestSubarray(nums);
}