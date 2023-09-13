class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> nc(ratings.size(),1);
        //BRUTE FORCE APPROACH
        // for(int i=0;i<ratings.size()-1;i++){
        //     if(ratings[i] > ratings[i+1] && nc[i] <= nc[i+1]){
        //         nc[i] = nc[i+1] + 1;
        //             int k = i;
        //             while(k != 0){
        //                 if(ratings[k-1] > ratings[k] && nc[k-1] <= nc[k]){
        //                     nc[k-1] = nc[k] + 1;
        //                 }
        //                 else{
        //                     break;
        //                 }
        //                 k--;
        //             }
        //     }
        //     else if(ratings[i] < ratings[i+1] && nc[i] >= nc[i+1]){
        //         nc[i+1] = nc[i] + 1;
        //     }
        // }
        // for(int i=0;i<ratings.size()-1;i++){
        //     if(ratings[i] > ratings[i+1] && nc[i] <= nc[i+1]){
        //         nc[i]+=nc[i+1];
        //     }
        //     else if(ratings[i] < ratings[i+1] && nc[i] >= nc[i+1]){
        //         nc[i+1] += nc[i];
        //     }
        // }
        //GREEDY TWO PASS APPROACH
        for(int i=1;i<ratings.size();i++){
            if(ratings[i] > ratings[i-1]){
                nc[i] = nc[i-1]+1;
            }
        }
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i] > ratings[i+1]){
                nc[i] = max(nc[i],nc[i+1]+1);
            }
        }
        int sum = 0;
        for(auto i:nc){
            sum += i;
        }
        return sum;
    }
};
