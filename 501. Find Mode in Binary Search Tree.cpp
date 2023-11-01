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
    void inOrdered(TreeNode*root,unordered_map<int,int>&mp,int&maxi){
        if(root == NULL) return;
        mp[root->val]++;
        maxi = max(maxi,mp[root->val]);
        inOrdered(root->left,mp,maxi);
        inOrdered(root->right,mp,maxi);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mp;
        int maxi = INT_MIN;
        inOrdered(root,mp,maxi);
        vector<int> result;
        for(auto i:mp){
            if(i.second == maxi){
                result.push_back(i.first);
            } 
        }
        return result;
    }
};
