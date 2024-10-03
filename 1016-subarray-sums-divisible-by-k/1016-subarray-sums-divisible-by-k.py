from collections import defaultdict
class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        mp = defaultdict(int)
        mp[0] = 1
        curr = 0
        count = 0
        for num in nums:
            curr = (curr+num)%k
            count += mp[curr]
            mp[curr] += 1
            
        return count