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
    // unordered_map<int,int> mp;
    void traversal(TreeNode*root,vector<int>&map){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) map.push_back(root->val);
        traversal(root->left,map);
        traversal(root->right,map);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> map1;
        vector<int> map2;
        traversal(root1,map1);
        traversal(root2,map2);
        return map1 == map2;
    }
};
