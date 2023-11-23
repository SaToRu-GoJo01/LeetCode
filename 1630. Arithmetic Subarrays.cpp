class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> result;
        for(int i=0;i<l.size();i++){
            int left = l[i],right = r[i];
            vector<int> extra (nums.begin()+left,nums.begin()+right+1);
            sort(extra.begin(),extra.end());
            int diff = extra[1] - extra[0];
            int inserted = 0;
            for(int j = 1;j<extra.size();j++){
                if(diff != extra[j] - extra[j-1]){
                    result.push_back(false);
                    inserted = 1;
                    break;
                }
            }
            if(!inserted)
            result.push_back(true);
        }
        return result;
    }
};
