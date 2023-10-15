class Solution {
public:
    int maxDepth(string s) {
        int count = 0,depth = 0;
        for(auto i:s){
            if(i == '('){
                count++;
                depth = max(count,depth);
            }
            else if(i == ')'){
                count--;
            }
        }
        return depth;
    }
};
