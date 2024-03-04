class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n = tokens.size();
        int left = 0,right = n-1;
        int maxScore = 0,score=0;
        while(left <= right){
            if(power>=tokens[left]){
                power-=tokens[left];
                score++;
                left++;
                maxScore = max(score,maxScore);
            }
            else if(score >= 1){
                score--;
                power+=tokens[right];
                right--;
            }
            else{
                return maxScore;
            }
        }
        return maxScore;
    }
};
