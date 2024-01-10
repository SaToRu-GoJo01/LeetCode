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
    void makeGraph(TreeNode*curr,int parent,unordered_map<int,vector<int>>&myMap){
        if(curr == NULL) return;
        if(parent != -1){
            myMap[curr->val].push_back(parent);
        }
        if(curr->left) myMap[curr->val].push_back(curr->left->val);
        if(curr->right) myMap[curr->val].push_back(curr->right->val);
        makeGraph(curr->left,curr->val,myMap);
        makeGraph(curr->right,curr->val,myMap);
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,vector<int>> myMap;
        makeGraph(root,-1,myMap);
        queue<int> que;
        unordered_set<int> visited;
        visited.insert(start);
        que.push(start);
        int minutes = 0;
        while(!que.empty()){
            int n = que.size();
            while(n--){
                int curr = que.front();
                que.pop();
                for(auto i:myMap[curr]){
                    if(visited.find(i) == visited.end()){
                        visited.insert(i);
                        que.push(i);
                    }
                }
            }
            minutes++;
        }
        return minutes - 1;
    }
};
