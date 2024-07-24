class Solution:
    def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
        def func(x:int):
            if x == 0:
                return mapping[0]
            result = 0
            multiplier = 1
            while x != 0:
                digit = x % 10
                replace = mapping[digit]
                result += replace * multiplier
                multiplier *= 10
                x //= 10
            return result
        nums.sort(key = lambda x:func(x))
        return nums
