#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
    TreeNode* ans = new TreeNode(0);
    TreeNode* cur = ans;
public:
    TreeNode* convertBiNode(TreeNode* root) {
        backtrack(root);
        return ans->right;
    }
    void backtrack(TreeNode* node) {
        if (node==NULL) {
            return;
        }
        backtrack(node->left);
        node->left = NULL;
        cur->right = node;
        cur = node;
        backtrack(node->right);
    }
};