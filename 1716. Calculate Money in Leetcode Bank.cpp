class Solution {
public:
    int totalMoney(int n) {
        float sum = 0;
        int no_of_mondays=ceil((float)n/7);
        cout << no_of_mondays << endl;
        for(int i=0;i<no_of_mondays;i++){
            int num = 7;
            if(n < 7){
                num = n;
            }
            n-=7;
            sum+=(((float)num/2)*(2*(i+1)+(num-1)));
        }
        return sum;
    }
};
