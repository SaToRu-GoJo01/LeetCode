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

// PYTHON
class Solution:
    def judgeCircle(self, moves: str) -> bool:
        l,r,u,d = 0,0,0,0
        for i in moves:
            if i == 'L':
                l+=1
            elif i == 'R':
                r+=1
            elif i == 'U':
                u+=1
            else:
                d+=1
        if l - r == 0 and u - d == 0:
            return True
        return False
