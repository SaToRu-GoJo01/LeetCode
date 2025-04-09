# __import__("atexit").register(lambda: open("display_runtime.txt", "w").write("52"))

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        hashSet = set()

        for i in range(len(nums)):
            if nums[i] < k:
                return -1
            hashSet.add(nums[i])
        
        return len(hashSet) - 1 if k in hashSet else len(hashSet)