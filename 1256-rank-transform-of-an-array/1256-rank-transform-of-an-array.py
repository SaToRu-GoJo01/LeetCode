class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        b = sorted(set(arr))
        c = {ele:rank+1 for rank,ele in enumerate(b)}
        return [c[i] for i in arr]