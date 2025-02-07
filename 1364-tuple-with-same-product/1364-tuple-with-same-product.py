class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        dt = defaultdict(list)
        for i in nums:
            for j in nums:
                if i != j:
                    product = i * j
                    if i not in dt[product] and j not in dt[product]:
                        dt[product].append(i)
                        dt[product].append(j)
        ans = 0
        # for key,value in dt.items():
        #     print(key,value)
        for key,value in dt.items():
            if len(value) == 4:
                ans += 8
            elif len(value) > 4:
                temp = 0
                for i in range(2,len(value)//2+1):
                    temp += i - 1
                # print(temp)
                ans += temp * 8
        return ans