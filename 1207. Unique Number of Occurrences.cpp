class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_set<int> freq;
        int count = 0;
        int prev = arr[0];
        for(auto i:arr){
            if(i == prev)count++;
            else{
                if(freq.find(count) != freq.end()) return false;
                freq.insert(count);
                count = 1;
            }   
            prev = i;
        }
        if(freq.find(count) != freq.end()) return false;
        return true;
    }
};
