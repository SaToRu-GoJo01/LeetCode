class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int maximum = piles.size()/3;
        int result = 0;
        int i = piles.size() - 2;
        while(maximum != 0){
            result += piles[i];
            i-=2;
            maximum--;
        }
        return result;
    }
};
