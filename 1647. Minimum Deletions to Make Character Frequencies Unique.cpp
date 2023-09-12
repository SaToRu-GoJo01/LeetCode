class Solution {
public:
    // bool compare(int a ,int b) const{
    //     return a > b;
    // }
    int minDeletions(string s) {
    // BRUTE FORCE APPROACH
    //     unordered_map<char,int> mp;
    //     if(s.length() == 1) return 0;
    //     for(char i:s){
    //         mp[i]++;
    //     }
    //     vector<int> extra;
    //     for(auto i:mp){
    //         extra.push_back(i.second);
    //     }
        // sort(extra.begin(),extra.end(),[this](int a, int b) { return compare(a, b); });
    //     int deleted = 0;
    //     int maxFreq = extra[0];
    //     bool firstElementSkipped = false;
    //     for(auto i:extra){
    //         if (!firstElementSkipped) {
    //             firstElementSkipped = true;
    //             continue;
    //         }
    //         if(maxFreq == 1){
    //                 deleted += i;
    //             }
    //         else if(i >= maxFreq){
    //             int d = (maxFreq - i) - 1;
    //             cout << d << endl;
    //             deleted += abs(d);
    //             i = i - abs(d);
    //             maxFreq = i;
    //         }
    //         else{
    //             maxFreq = i;
    //         }
    //     }
    //     return deleted;

    // GREEDY APPROACH
    vector<int> freq(26,0);
    for(auto i:s){
        freq[i-'a']++;
    }
    sort(freq.begin(),freq.end());
    int deleted = 0;
    for(int i=24;i>=0;i--){
        if(freq[i] == 0) break;
        if(freq[i] >= freq[i+1]){
            int prev = freq[i];
            freq[i] = max(0,freq[i+1]-1);
            deleted += prev - freq[i];
        }
    }
    return deleted;
    }
};
