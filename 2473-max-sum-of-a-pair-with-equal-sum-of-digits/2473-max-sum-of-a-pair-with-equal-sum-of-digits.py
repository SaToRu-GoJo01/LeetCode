class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        new_nums = []
        def s(i):
            sum = 0
            while i != 0:
                sum += i%10
                i //= 10
            return sum
        dic = defaultdict(list)
        for index,i in enumerate(nums):
            dic[s(i)].append(index)
        ans = -1
        # print(dic)
        for indices in dic.values():
            if len(indices) >= 2:
                max1,max2 = float('-inf'),float('-inf')
                for index in indices:
                    if(max1 < nums[index]):
                        max2 = max1
                        max1 = nums[index]
                    elif(max2 < nums[index]):
                        max2 = nums[index]
                ans = max(ans,max1+max2)
                # print(ans,max1,max2,indices)
        return ans