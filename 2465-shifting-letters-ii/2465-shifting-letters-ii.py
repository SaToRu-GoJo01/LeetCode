class Solution:
    def shiftingLetters(self, s: str, shifts: List[List[int]]) -> str:
        n = len(s)
        diff = [0] * (n)
        for l,r,shift in shifts:
            diff[l] += 1 if shift == 1 else -1
            if r+1 < len(diff):
                diff[r+1] -= 1 if shift == 1 else -1

        #step 2: cummulative sum
        for i in range(1,len(diff)):
            diff[i] += diff[i-1]
        
        arr = list(s)

        for i in range(len(diff)):
            arr[i] = chr((ord(arr[i]) - ord('a') + diff[i])%26 + ord('a'))
        
        return "".join(arr)