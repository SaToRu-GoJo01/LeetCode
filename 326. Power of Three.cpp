class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        double t = log10(n)/log10(3);
        if(floor(t) == t) return true;
        return false;
    }
};
