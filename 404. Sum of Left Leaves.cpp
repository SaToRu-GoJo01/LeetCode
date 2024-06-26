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
    int ans=0;
    void traversal(TreeNode* root,bool l){
        if(root == NULL) return;
        if(l && root->left == NULL && root->right == NULL) {
            ans += root->val;
        }
        traversal(root->left,true);
        traversal(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        // ans = 0;
        traversal(root,false);
        return ans;
    }
};
