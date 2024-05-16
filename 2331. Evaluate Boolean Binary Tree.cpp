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
    bool traversal(TreeNode* root){
        bool left,right;
        if(root->left != nullptr){
            left = traversal(root->left);
        }
        if(root->right != nullptr){
            right = traversal(root->right);
        }
        if(root->val == 2){
            return left || right;
        }
        else if(root->val == 3){
            return left && right;
        }
        return root->val;
    }
    bool evaluateTree(TreeNode* root) {
        return traversal(root);
    }
};
