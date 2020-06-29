#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> vec;
        core(vec, n);
        if (k <= vec.size()) {
            return vec[k - 1];
        }
        else {
            return -1;
        }
        
    }
    void core(vector<int>& vec,int n) {
        for (int i = 1; i <=n; i++) {
            if (n % i == 0) {
                vec.push_back(i);
            }
        }
    }
};