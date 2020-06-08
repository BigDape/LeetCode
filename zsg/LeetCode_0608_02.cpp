#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return false;
        int i = 0;//ÐÐ
        int j = matrix[0].size()-1;//ÁÐ
        while (i<matrix.size()&&j>=0) {
            if (matrix[i][j] == target) {
                return true;
            }
            else if (matrix[i][j] > target) {
                j--;
            }
            else if(matrix[i][j] < target){
                i++;
            }
        }
        return false;
    }
};