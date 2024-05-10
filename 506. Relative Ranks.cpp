class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int> newScore;
        for(int i=0;i<score.size();i++){
            newScore[score[i]] = i;
        }
        int count = score.size();
        vector<string> result(newScore.size(),"");
        for(auto&i:newScore){
            int value = i.first;
            int idx = i.second;
            if(count == 1) result[idx] = "Gold Medal";
            else if(count == 2) result[idx] = "Silver Medal";
            else if(count == 3) result[idx] = "Bronze Medal";
            else result[idx] = to_string(count);
            count--;
        }
        return result;
    }
};
