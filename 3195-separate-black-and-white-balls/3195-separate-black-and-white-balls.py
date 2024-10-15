class Solution:
    def minimumSteps(self, s: str) -> int:
        count,one = 0,0
        for ch in s:
            if ch == '1':
                one+=1
            else:
                count+=one
        return count
        