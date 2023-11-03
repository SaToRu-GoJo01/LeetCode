class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int targetIndex = 0;
        for(int i=1;i<=n;i++){
            if(targetIndex == target.size()) break;
            if(target[targetIndex] == i){
                result.push_back("Push");
                targetIndex++;
            }
            else{
                result.push_back("Push");
                result.push_back("Pop");
            }
        }
        return result;
    }
};
