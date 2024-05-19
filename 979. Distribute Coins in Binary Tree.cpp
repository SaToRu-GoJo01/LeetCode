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
    int ans  = 0;
    int traversal(TreeNode* root){
        if(root == NULL) return 0;
        int left = traversal(root->left);
        int right = traversal(root->right);
        ans += abs(left)+abs(right);
        return left+right+root->val-1;
    }
    int distributeCoins(TreeNode* root) {
        traversal(root);
        return ans;
    }
};
