class Solution:
    def largestOddNumber(self, num: str) -> str:
        i = 0
        pos = -1
        while i < len(num):
            if (ord(num[i])-48) % 2 != 0:
                pos = i
            i+=1
        return num[:pos+1] if pos != -1 else ""