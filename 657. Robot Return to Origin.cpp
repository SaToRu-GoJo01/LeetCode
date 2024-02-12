class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,d=0,r=0,l=0;
        for(auto &i:moves){
            if(i == 'U'){
                u++;
            }
            else if(i == 'D'){
                d++;
            }
            else if(i == 'R'){
                r++;
            }
            else{
                l++;
            }
        }
        if(u-d == 0 && r-l == 0) return true;
        return false;
    }
};
