class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int sum = 0;
        int ticketToBuy = tickets[k];
        for(int i=0;i<tickets.size();i++){
            // if(i <= k){
            //     if(ticketToBuy >= tickets[i]){
            //         sum+=tickets[i];
            //     }
            //     else{
            //         sum+=ticketToBuy;
            //     }
            // }
            // else{
            //     if(ticketToBuy > tickets[i]){
            //         sum+=tickets[i];
            //     }
            //     else{
            //         sum+=ticketToBuy-1;
            //     }
            // }
            int buy = (i<=k)?ticketToBuy:ticketToBuy-1;
            sum+=min(buy,tickets[i]);
        }
        return sum;
    }
};
