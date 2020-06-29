#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        int maxv = INT_MIN;
        int minv = INT_MAX;
        for (int i = 0; i < salary.size(); i++) {
            if (salary[i] > maxv) {
                maxv = salary[i];
            }
            if (salary[i] < minv) {
                minv = salary[i];
            }
            sum += salary[i];
        }
        sum = sum - minv - maxv;
        double res = (double)sum / (double)(salary.size() - 2);
        return res;
    }
};