class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int price1=INT_MAX,price2=INT_MAX;
        for(auto i:prices){
            if(i <= price1){
                price2 = price1;
                price1 = i;
            }
            else if(price2 > i){
                price2 = i;
            }
        }
        if(price1+price2 <= money){
            money-=price1+price2;
        }
        return money;
    }
};
