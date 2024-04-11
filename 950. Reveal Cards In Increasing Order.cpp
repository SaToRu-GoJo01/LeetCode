class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> result(n,0);
        sort(deck.begin(),deck.end());
        int j = 0,i=0;
        bool skip = false;
        while(j<n){
            if(result[i] == 0){
                if(!skip){
                    result[i] = deck[j++];
                }
                skip = !skip;
            }
            i=(i+1)%n;
        }
        return result;
    }
};
