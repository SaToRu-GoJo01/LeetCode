class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto i:s){
            mp[i]++;
        }
        vector<pair<char,int>> sortedVector(mp.begin(),mp.end());
        sort(sortedVector.begin(),sortedVector.end(),[](const pair<char,int> &a,const pair<char,int>&b){
            return a.second > b.second;
        });
        s = "";
        for(int i=0;i<sortedVector.size();i++){
            while(sortedVector[i].second != 0){
                s += sortedVector[i].first;
                sortedVector[i].second--;
            }
        }
        return s;
    }
};

// SECOND APPROACH
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char &i:s){
            freq[i]++;
        }
        s = "";
        while(!freq.empty()){
            int maximum = INT_MIN;
            int character;
            for(auto &j:freq){
                if(maximum < j.second){
                    maximum = j.second;
                    character = j.first;
                }
            }
            freq.erase(character);
            s += string(maximum,character);
        }
        return s;
    }
};
