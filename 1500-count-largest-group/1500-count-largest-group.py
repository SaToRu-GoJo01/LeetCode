class Solution:
    def countLargestGroup(self, n: int) -> int:
        def solve(x):
            ans = 0
            while x != 0:
                ans += (x % 10)
                x //= 10
            return ans

        mpp = defaultdict(int)
        maxi = 0
        for i in range(1,n+1):
            digit_sum = solve(i)
            # print()
            mpp[digit_sum] += 1
            maxi = max(maxi,mpp[digit_sum])
        
        ans = 0
        for value in mpp.values():
            if value == maxi:
                ans += 1
        return ans