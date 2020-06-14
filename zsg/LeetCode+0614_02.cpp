#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        //balloon
        vector<int> vec(5);
        for (int i = 0; i < text.size(); i++) {
            switch (text[i])
            {
            case 'a':vec[0] += 1; break;
            case 'b':vec[1] += 1; break;
            case 'l':vec[2] += 1; break;
            case 'o':vec[3] += 1; break;
            case 'n':vec[4] += 1; break;
            default:
                break;
            }
        }
        vec[2] /= 2;
        vec[3] /= 2;
        return *min_element(vec.begin(), vec.end());;
    }
};