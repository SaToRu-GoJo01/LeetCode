class Solution {
public:
    //USING RECURSION AND MEMOIZATION
    // int memo[46];
    // int solve(int n){
    //     if(n < 0) return 0;
    //     if(memo[n] != -1) return memo[n];
    //     if(n == 0) return 1;
    //     int ifOne = solve(n-1);
    //     int ifTwo = solve(n-2);
    //     return memo[n] = ifOne+ifTwo;
    // }
    // int climbStairs(int n) {
    //     memset(memo,-1,sizeof(memo));
    //     return solve(n);
    // }

    //USING BOTTOM UP APPROACH
    // int climbStairs(int n){
    //     if(n == 0 || n==1 || n == 2 || n == 3) return n;
    //     int t[46];
    //     t[0] = 0;
    //     t[1] = 1;
    //     t[2] = 2;
    //     for(int i=3;i<=n;i++){
    //         t[i] = t[i-1]+t[i-2];
    //     }
    //     return t[n];
    // }

    // USING A MODIFICATION OF BOTTOM UP APPROACH
    int climbStairs(int n){
        if(n == 0 || n == 1 || n == 2 || n == 3) return n;
        int a = 2;
        int b = 3;
        int c = 5;
        for(int i=4;i<=n;i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};
