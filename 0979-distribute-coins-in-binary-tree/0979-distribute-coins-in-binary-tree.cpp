/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     int solve(TreeNode* root,int &ans){
        if(root == NULL) return 0;
        int l = solve(root->left,ans);
        int r = solve(root->right,ans);
        int val = ((l+r+1) - root->val);
        ans += abs(val);
        return val;
    }

    int distributeCoins(TreeNode* root) {
        int ans = 0;
        int x = solve(root,ans);
        return ans;
    }
};