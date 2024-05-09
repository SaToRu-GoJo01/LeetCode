class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        happiness.sort()
        count = 0
        ans = 0
        for i in range(len(happiness)-1,-1,-1):
            if(happiness[i]-count > 0 and k > 0):
                ans += happiness[i]-count
                count += 1
                k-=1
            else:
                break
        return ans
