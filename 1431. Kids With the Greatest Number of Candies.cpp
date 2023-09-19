class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = *max_element(candies.begin(),candies.end());
        // for(auto i:candies){
        //     maximum = max(i,maximum);
        // }
        vector<bool> result;
        for(auto i:candies){
            if(i+extraCandies >= maximum){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};
