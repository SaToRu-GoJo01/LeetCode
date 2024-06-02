class Solution:
    def reverseString(self, s: List[str]) -> None:
        left,right = 0,-1
        while left < len(s)//2:
            s[left],s[right] = s[right],s[left]
            left+=1
            right-=1
