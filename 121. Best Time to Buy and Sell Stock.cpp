class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //FIRST INTIUATION

        // int n = prices.size();
        // vector<int> maxPrices(n,0);
        // maxPrices[n-1] = prices[n-1];
        // for(int i = n-2;i>=0;i--){
        //     maxPrices[i] = max(maxPrices[i+1],prices[i]);
        // }
        // int maxProfit = 0;
        // for(int i=0;i<n;i++){
        //     maxProfit = max(maxProfit,maxPrices[i]-prices[i]);
        // }
        // return maxProfit;


        // SECOND APPROACH AND OPTIMAL APPROACH
        int mini = INT_MAX,maxi =0;
        for(int i=0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            maxi = max(maxi,prices[i] - mini);
        }
        return maxi;
    }
};
