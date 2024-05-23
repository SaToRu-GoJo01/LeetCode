class Solution:
    def beautifulSubsets(self, nums: List[int], k: int) -> int:
        ans = 0
        def takeOrNotTake(level,my_dict):
            nonlocal ans

            if level >= len(nums):
                if len(my_dict) > 0:
                    ans+=1
                return

            takeOrNotTake(level+1,my_dict)
            if (nums[level] + k) not in my_dict and (nums[level]-k) not in my_dict:
                my_dict[nums[level]] = my_dict.get(nums[level],0)+1
                takeOrNotTake(level+1,my_dict)
                my_dict[nums[level]] -= 1
                if my_dict[nums[level]] == 0:
                    del my_dict[nums[level]]

        takeOrNotTake(0,{})
        return ans
