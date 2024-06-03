class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        tIdx = 0
        for letter in s:
            if t[tIdx] == letter:
                tIdx += 1
            if tIdx == len(t):
                return 0
        return len(t) - tIdx
