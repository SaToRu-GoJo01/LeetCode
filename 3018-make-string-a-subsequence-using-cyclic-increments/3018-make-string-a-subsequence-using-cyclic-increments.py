class Solution:
    def canMakeSubsequence(self, str1: str, str2: str) -> bool:
        i = 0
        for ch in str2:
            while i < len(str1):
                if str1[i] == ch or chr((ord(str1[i]) - ord('a') + 1) % 26 + ord('a')) == ch:
                    i += 1
                    break
                i += 1
            else:
                return False
        return True
