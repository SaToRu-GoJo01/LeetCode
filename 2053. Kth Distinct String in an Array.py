class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        count = Counter(arr)
        
        for string in arr:
            if count[string] == 1:
                k-=1
            if k == 0:
                return string
                
        return ""
