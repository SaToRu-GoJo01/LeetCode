class Solution:
    def getEncryptedString(self, s: str, k: int) -> str:
        encStr = ""
        n = len(s)
        for i in range(len(s)):
            encStr += s[(k+i) % n]
        return encStr
