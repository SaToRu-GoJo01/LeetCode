from typing import List
from collections import defaultdict

class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        def digit_sum(n):
            total = 0
            while n:
                total += n % 10
                n //= 10
            return total

        dic = defaultdict(list)
        
        for num in nums:
            dic[digit_sum(num)].append(num)

        ans = -1
        
        for values in dic.values():
            if len(values) >= 2:
                max1, max2 = sorted(values, reverse=True)[:2]
                ans = max(ans, max1 + max2)

        return ans
