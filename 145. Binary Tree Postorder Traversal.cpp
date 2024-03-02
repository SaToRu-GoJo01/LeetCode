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


class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        // ITERATIVE METHOD USING TWO STACKS
        vector<int> result;
        if(root == nullptr) return result;
        stack<TreeNode*> s1,s2;
        s1.push(root);
        while(!s1.empty()){
            TreeNode*temp = s1.top();
            s2.push(temp);
            s1.pop();
            if(temp->left) s1.push(temp->left);
            if(temp->right) s1.push(temp->right);
        }
        while(!s2.empty()){
            TreeNode*temp = s2.top();
            s2.pop();
            result.push_back(temp->val);
        }
        return result;
    }
};
