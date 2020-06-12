#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        if (num1.empty() || num2.empty()) return num1.empty() ? num2 : num1;
        string res;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int temp = 0;
        if (num2.size() >= num1.size()) {
            res = num1;
            num1 = num2;
            num2 = res;
            res.clear();
        }
        for (int i = 0; i < num2.size(); i++) {
            int sum = (num1[i] - '0') + (num2[i] - '0')+temp;
            temp = (sum + temp) / 10;
            res += to_string(sum%10);
        }
        int j = num2.size();
        while (j < num1.size()) {
            int sum = num1[j]-'0' + temp;
            temp = sum / 10;
            res += to_string(sum%10);
            j++;
        }
        if (temp != 0) res += to_string(temp);
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution ss;
    string num1 = "999", num2 = "999";
    ss.addStrings(num1,num2);
    return 0;
}