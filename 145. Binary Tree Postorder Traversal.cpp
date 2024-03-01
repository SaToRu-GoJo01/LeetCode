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
    void postOrder(TreeNode*root,vector<int> &extra){
        if(root == nullptr) return;
        postOrder(root->left,extra);
        postOrder(root->right,extra);
        extra.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postOrder(root,result);
        return result;
    }
};
