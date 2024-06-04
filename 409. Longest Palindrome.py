class Solution:
    def longestPalindrome(self, s: str) -> int:
        map = {}
        for i in s:
            map[i] = map.get(i,0)+1
        result = 0
        odd_found = False
        for i in map.values():
            if i % 2 == 0:
                result += i
            else:
                result += i - 1
                odd_found = True
        if odd_found:
            result+=1
        return result
