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
    int result;
    int inOrder(TreeNode* root){
        if(root == nullptr) return 0;
        int left = 1+inOrder(root->left);
        int right = 1+inOrder(root->right);
        return max(left,right);
    }
    int maxDepth(TreeNode* root) {
        return inOrder(root);
    }
};
