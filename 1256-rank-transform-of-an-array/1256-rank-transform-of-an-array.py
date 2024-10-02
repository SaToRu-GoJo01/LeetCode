class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        st = set(arr)
        sort = sorted(st)
        dic = {}
        for i in range(len(sort)):
            if dic.get(sort[i],-1) == -1:
                dic[sort[i]] = i+1
        print(dic)
        for i in range(len(arr)):
            arr[i] = dic[arr[i]]
        return arr