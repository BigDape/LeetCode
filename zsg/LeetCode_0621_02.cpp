#include <bits/stdc++.h>
using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
    int sum = 0;
public:
    TreeNode* bstToGst(TreeNode* root) {
        afterorder(root);
        return root;
    }
    void afterorder(TreeNode* root) {
        if (root == NULL)
            return;
        afterorder(root->right);
        sum += root->val;
        root->val = sum;
        afterorder(root->left);
    }
};