#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        vector<int> t1(n-1);
        copy(nums.begin(), nums.begin() + n-1,t1.begin());
        vector<int> t2(n - 1);
        copy(nums.begin() + 1, nums.begin() + n,t2.begin());
        int p1 = core(t1);
        int p2 = core(t2);
        return max(p1,p2);
    }

    int core(vector<int>& nums) {
        int pre=0;
        int cur=0;
        int res;
        for (int i : nums) {
            res = cur;
            cur = max(pre+i,cur);
            pre = res;
        }
        return cur;
    }
};

int main() {
    Solution ss;
    vector<int> nums = {1,2,3,1};
    ss.rob(nums);
    return 0;
}