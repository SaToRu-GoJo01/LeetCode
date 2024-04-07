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
    void traversal(TreeNode* root,map<int,map<int,multiset<int>>>&map,int row,int col){
        if(root == nullptr) return;
        map[col][row].insert(root->val);
        traversal(root->left,map,row+1,col-1);
        traversal(root->right,map,row+1,col+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mp;
        traversal(root,mp,0,0);

        vector<vector<int>> result;

        for (auto& i : mp) {
            vector<int> extra;
            for (auto& j : i.second) {
                for (int val : j.second) {
                    extra.push_back(val);
                }
            }
            result.push_back(extra);
        }
        return result;
    }
};
