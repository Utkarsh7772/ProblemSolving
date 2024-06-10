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
    int pathSum(TreeNode* root,long long targetSum) {
        int psum=0;
        if(root==nullptr){
            return 0;
        }
        psum=helper(root,targetSum)+pathSum(root->left,targetSum)+pathSum(root->right,targetSum);
        return psum;
    }
    int helper(TreeNode* root, long long targetSum){
        int cnt=0;
        if(root==nullptr)
            return 0;
         if (root->val == targetSum) cnt++;
        cnt += helper(root->left, targetSum - root->val);
        cnt += helper(root->right, targetSum - root->val);
        return cnt;
    }
};