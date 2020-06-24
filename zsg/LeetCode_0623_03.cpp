#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xoffset[4] = { 0, -1, 0, 1 }, yoffset[4] = { -1, 0, 1, 0 };
    void dfs(vector<vector<char>>& board, int x, int y) {
        board[x][y] = 'A';
        for (int i = 0; i < 4; i++) {
            int nx = x + xoffset[i], ny = y + yoffset[i];
            if (-1 < nx and nx < board.size() and -1 < ny and ny < board[0].size() and board[nx][ny] == 'O') {
                dfs(board, nx, ny);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        if (board.size() == 0) {
            return;
        }
        else {
            for (int i = 0, j = 0; j < board[0].size(); j++) {
                if (board[i][j] == 'O') dfs(board, i, j);
            }
            for (int i = 0, j = 0; i < board.size(); i++) {
                if (board[i][j] == 'O') dfs(board, i, j);
            }
            for (int i = board.size() - 1, j = 0; j < board[0].size(); j++) {
                if (board[i][j] == 'O') dfs(board, i, j);
            }
            for (int i = board.size() - 1, j = board[0].size() - 1; i > -1; i--) {
                if (board[i][j] == 'O') dfs(board, i, j);
            }
        }
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == 'A') {
                    board[i][j] = 'O';
                }
                else {
                    board[i][j] = 'X';
                }
            }
        }
    }
};

