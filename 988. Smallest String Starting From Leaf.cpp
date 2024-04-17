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
    string result = "";
    void traversal(TreeNode*root,string curr){
        if(root == nullptr) return;
        char ch = 'a' + root->val;
        curr = ch+curr;
        cout << curr << endl;
        if(root->left == nullptr && root->right == nullptr) if(curr < result) result = curr;
        else if(result.size() <= 0) result = curr;
        traversal(root->left,curr);
        traversal(root->right,curr);
    }
    string smallestFromLeaf(TreeNode* root) {
        traversal(root,"");
        return result;
    }
};
