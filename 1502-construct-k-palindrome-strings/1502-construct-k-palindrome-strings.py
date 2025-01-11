class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        if len(s) == k:
            return True
        if len(s) < k:
            return False
        count = Counter(s)
        remaining = 0
        for key,value in count.items():
            if value % 2 != 0:
                remaining += 1
        if remaining > k:
            return False
        return True
        