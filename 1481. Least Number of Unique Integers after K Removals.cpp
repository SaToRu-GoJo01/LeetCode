class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> freq;
        for(auto &i:arr){
            freq[i]++;
        }
        vector<int> sortedFreq;
        for(auto &i:freq){
            sortedFreq.push_back(i.second);
        }
        sort(sortedFreq.begin(),sortedFreq.end());
        for(int i=0;i<sortedFreq.size();i++){
            if(k-sortedFreq[i] >= 0){
                k -= sortedFreq[i];
            }
            else{
                return sortedFreq.size()-i;
            }
        }
        return 0;
    }
};
