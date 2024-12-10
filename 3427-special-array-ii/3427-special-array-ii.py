class Solution:
    def isArraySpecial(self, nums: List[int], queries: List[List[int]]) -> List[bool]:
        prefix_sum = []
        oddEven = None
        running = 0

        for num in nums:
            if num % 2 == oddEven:
                running+=1
            oddEven = num % 2    
            prefix_sum.append(running)

        ans = []

        for x,y in queries:
            if prefix_sum[x] == prefix_sum[y]:
                ans.append(True)
            else:
                ans.append(False)
        return ans