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
    void levelOrder(TreeNode* root, vector<vector<int>> &result){
        if(root == NULL) return;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int> level;
            for(int i = 0; i<size ; i++){
                TreeNode* temp = que.front();
                que.pop();
                level.push_back(temp->val);
                if(temp->left) que.push(temp->left);
                if(temp->right) que.push(temp->right);
            }
            result.push_back(level);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        levelOrder(root,result);
        return result;
    }
};
