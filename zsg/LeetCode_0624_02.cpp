#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int N = grid.size();
        int xoffset[4] = {-1,1,0,0}, yoffset[4] = {0,0,-1,1};
        pair<int,int> q;
        vector<pair<int, int>> q_vec;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (grid[i][j] == 1) {
                    q.first=i;
                    q.second = j;
                    q_vec.push_back(q);
                }
            }
        }
        if (q_vec.size()==0||q_vec.size()==N*N) {
            return -1;
        }
        int distance = -1;
        while (q_vec.size()!=0) {
            distance++;
            int n = q_vec.size();
            for (int i = 0; i < n; i++) {
                pair<int,int> node = q_vec[i];
                //q_vec.erase(q_vec.begin());
                int r = node.first;
                int c = node.second;
                for (int j = 0; j < 4; j++) {
                    int r2 = r + xoffset[j];
                    int c2 = c + yoffset[j];
                    if (inArea(grid, r2, c2) && grid[r2][c2] == 0) {
                        grid[r2][c2] = 2;
                        q.first = r2;
                        q.second = c2;
                        q_vec.push_back(q);
                    }
                }
            }
            q_vec.erase(q_vec.begin(),q_vec.begin()+n);
        }
        return distance;
    }
    bool inArea(vector<vector<int>>& grid,int r,int c) {
        return 0 <= r && 0 <= c && r < grid.size() && c < grid[0].size();
    }
};