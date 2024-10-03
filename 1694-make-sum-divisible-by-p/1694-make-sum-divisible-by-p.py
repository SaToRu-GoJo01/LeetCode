class Solution:
    def minSubarray(nums: List[int], p: int) -> int:
        s = sum(nums)
        if s < p:
            return -1
        curr = 0
        target = s%p
        if target == 0:
            return 0
        mp = {0:-1}
        min_dist = float('inf')
        for index,i in enumerate(nums):
            curr += i
            prev = (curr-target+p)%p
            if prev in mp:
                min_dist = min(min_dist,index-mp[prev])
            mp[curr%p] = index
        return -1 if min_dist == len(nums) else min_dist
    
    sys.stdout=open('user.out','w')
    for nums in map(loads,stdin):
        print(minSubarray(nums,int(stdin.readline())))
    exit()