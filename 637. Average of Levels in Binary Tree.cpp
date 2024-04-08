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
    void traversal(TreeNode*root,map<int,vector<int>>&mp,int row){
        if(root == nullptr) return;
        mp[row].push_back(root->val);
        traversal(root->left,mp,row+1);
        traversal(root->right,mp,row+1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        map<int,vector<int>> mp;
        traversal(root,mp,0);
        vector<double> result;
        for(auto &i:mp){
            double avg = 0;
            double sum = 0;
            for(auto &j:i.second){
                sum+=j;
            }
            avg = sum / i.second.size();
            result.push_back(avg);
        }
        return result;
    }
};
