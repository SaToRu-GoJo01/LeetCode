class Solution {
public:
    const long MOD = 1e9 + 7;
    int factorial(int n) {
        if (n == 0 || n == 1) return 1;
        long result = 1;
        for (int i = 2; i <= n; i++) {
            result = (result * i) % MOD;
        }
        return result;
    }
    int distribution(int n) {
        if (n == 1) return 1;
        long result = 1;
        for (int i = 2; i <= n; i++) {
            result = (result * (2*i - 1)) % MOD;
        }
        return result;
    }
    int countOrders(int n) {
        long factorialResult = factorial(n);
        long distributionResult = distribution(n);
        long totalOrders = (factorialResult * distributionResult) % MOD;
        return (int)(totalOrders);
    }
};
