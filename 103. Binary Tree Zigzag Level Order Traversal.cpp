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
    void traverse(vector<vector<int>> &result,TreeNode* root){
        int direction = 1;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int> extra;
            for(int i=0;i<size;i++){
                TreeNode*temp = que.front();
                extra.push_back(temp->val);
                que.pop();
                if(temp->left!=NULL) que.push(temp->left);
                if(temp->right!=NULL) que.push(temp->right);
            }
            if(direction == 1){
                result.push_back(extra);
                direction = 0;
            }
            else{
                reverse(extra.begin(),extra.end());
                result.push_back(extra);
                direction = 1;
            }
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        vector<vector<int>> result;
        traverse(result,root);
        return result;
    }
};
