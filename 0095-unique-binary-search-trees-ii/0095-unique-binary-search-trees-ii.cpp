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
    vector<TreeNode*> generateTrees(int n) {
         if(n==0)
             return {nullptr};
        return generate(1,n);
        }
        vector<TreeNode*>generate(int start,int end){
        vector<TreeNode*> ans;
        if(end<start){
            ans.push_back(nullptr);
            return ans;
        }
        for(int i=start;i<=end;i++){
            vector<TreeNode*>leftTrees=generate(start,i-1);
            vector<TreeNode*>rightTrees=generate(i+1,end);
            for(auto left : leftTrees){
                for(auto right : rightTrees){
                   TreeNode* node= new TreeNode(i);
                    node->left=left;
                    node->right=right;
                    ans.push_back(node);
                }
            }
        }
        return ans;
    }
};