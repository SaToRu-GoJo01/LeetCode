class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count = 0;
        while(left != right){
            right>>=1;
            left>>=1;
            count++;
        }
        return left<<count;
    }
};
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(left < right) {
            right = (right&(right-1));
        }
        return right;
    }
};
