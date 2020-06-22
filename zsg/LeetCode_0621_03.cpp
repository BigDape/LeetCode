#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end = s.size()-1;
        char temp;
        if (s.size() == 0 || s.size() == 1) return;
        while (start<end) {
            s[start] = s[start] ^ s[end];
            s[end] = s[start] ^ s[end];
            s[start] = s[start] ^ s[end];
            start = start + 1;
            end = end - 1;
        }
    }
};