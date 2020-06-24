#include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if (root != NULL) {
            q.push(root);
        }
        while (!q.empty()) {
            int n = q.size();
            vector<int> level;
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
            res.push_back(level);
        }
        return res;
    }
};