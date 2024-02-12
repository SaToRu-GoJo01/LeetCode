class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> freq(101,0);
        for(auto &i:heights){
            freq[i]++;
        }
        int j = 0;
        int count = 0;
        for(int i=0;i<101;i++){
            while(freq[i] != 0){
                if(heights[j] != i){
                    count++;
                }
                freq[i]--;
                j++;
            }
        }
        return count;
    }
};
