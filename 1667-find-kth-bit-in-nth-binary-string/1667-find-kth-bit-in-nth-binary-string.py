class Solution:
    def findKthBit(self, n: int, k: int) -> str:
        s = "0"
        for _ in range(1,n):
            inverted = ""
            for ch in s:
                inverted += "1" if ch == "0" else "0"
            new_s = s + "1" + inverted[::-1]
            s = new_s
        # print(s)
        return s[k-1]