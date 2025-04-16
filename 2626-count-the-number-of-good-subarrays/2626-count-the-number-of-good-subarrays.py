class Solution:
    def countGood(self, nums: List[int], k: int) -> int:
        n = len(nums)
        pairs = 0
        result = 0
        i,j = 0,0
        mp = defaultdict(int)

        while j < n:
            pairs += mp.get(nums[j],0)
            mp[nums[j]] += 1

            while pairs >= k:
                result += (n - j)
                mp[nums[i]] -= 1
                pairs -= mp[nums[i]]
                i += 1
            
            j += 1

        return result