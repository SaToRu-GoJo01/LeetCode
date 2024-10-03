# class Solution:
#     def subarraysDivByK(self, nums: List[int], k: int) -> int:
#         mp = {0:1}
#         curr = 0
#         count = 0
#         for num in nums:
#             curr += num
#             mod = curr % k
#             if mod in mp:
#                 count += mp[mod]
#                 mp[mod] += 1
#             else:
#                 mp[mod] = 1
#         return count
class Solution:
    def sub(nums: List[int], k: int) -> int:
        ream=ans=0
        d=defaultdict(int)
        d[0]=1
    
        for i in nums:
            ream=(ream+i)%k
            ans+=d[ream]
            d[ream]+=1
    
        return ans

    sys.stdout=open('user.out','w')
    for nums in map(loads,stdin):
        print(sub(nums,int(stdin.readline())))
    exit()