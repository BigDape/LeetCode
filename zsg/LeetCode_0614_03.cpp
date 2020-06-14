#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return 1;
        int slow = 0,fast=1;
        while(fast < nums.size()) {  
            if (nums[slow] == nums[fast]) {
                nums.erase(nums.begin()+fast);
                fast = slow;
            }
            else {
                slow = fast;
            }
            fast++;
        }
        return nums.size();
    }
};