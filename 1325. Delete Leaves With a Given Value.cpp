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
    bool traversal(TreeNode* root,int target){
        if(root == nullptr) return false;
        bool left = traversal(root->left,target);
        if(left){
            delete(root->left);
            root->left = NULL;
        }
        bool right = traversal(root->right,target);
        if(right){
            delete(root->right);
            root->right = NULL;
        }
        if(!root->left && !root->right && root->val == target){
            return true;
        }
        return false;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        bool ifRootDeleted = traversal(root,target);
        if(ifRootDeleted) return NULL;
        return root;
    }
};
