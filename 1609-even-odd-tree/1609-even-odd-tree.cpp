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
    bool isEvenOddTree(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        bool isEvenLevel = true;

        while (!q.empty()) {
            int size = q.size();
            TreeNode* prev = NULL;

            while (size--) {
                TreeNode* node = q.front();
                q.pop();

                if (isEvenLevel) {
                    if ((node->val % 2) == 0 || (prev && prev->val >= node->val)) return false;
                } else {
                    if ((node->val % 2) != 0 || (prev && prev->val <= node->val)) return false;
                }
                prev = node;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            isEvenLevel = !isEvenLevel;
        }

        return true;
    }
};