class Solution:
    def largestOddNumber(self, num: str) -> str:
        result = ""
        i = 0
        while i < len(num):
            if (ord(num[i])-48) % 2 != 0:
                result = num[:i+1]
            i+=1
        return result