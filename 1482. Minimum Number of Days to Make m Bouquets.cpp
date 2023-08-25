class Solution {
public:
    bool possible(vector<int> bloomDay,int m, int k, int current){
        int noOfBlooms = 0,count = 0;
        for(auto i:bloomDay){
            if(i<=current){
                count++;
            }
            else{
                noOfBlooms += (count/k);
                count = 0;
            }
        }
        noOfBlooms += (count/k);
        return noOfBlooms >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m*1ll*k;
        if(bloomDay.size() < val)
        return -1;
        int low = INT_MAX,high = INT_MIN,ans;
        for(auto i:bloomDay){
            low = min(low,i);
            high = max(high,i);
        }
        while(low <= high){
            int mid = low+(high-low)/2;
            if(possible(bloomDay,m,k,mid)){
                high = mid - 1;
                ans = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
