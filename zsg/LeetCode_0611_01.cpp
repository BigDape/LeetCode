#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums,0,n);
        reverse(nums,0,k);
        reverse(nums,k,n);
    }
    void reverse(vector<int>& nums,int begin,int end) 
    {
        for (int i = begin,j=end-1; i < j;i++,j--) {
            nums[i] = nums[i] ^ nums[j];
            nums[j] = nums[i] ^ nums[j];
            nums[i] = nums[i] ^ nums[j];
        }
    }
};