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
    void postTraversal(TreeNode* currNode, vector<int>&result){
        if(currNode==NULL)
            return;
        postTraversal(currNode->left, result);
        postTraversal(currNode->right,result);
        result.push_back(currNode->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        postTraversal(root,result);
        return result;
    }
};