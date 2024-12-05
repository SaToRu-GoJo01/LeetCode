class Solution:
    def canChange(self, start: str, target: str) -> bool:
        i,j = 0,0
        n = len(start)
        while i < n or j < n:
            while i<n and start[i] == '_':
                i+=1

            while j<n and target[j] == '_':
                j+=1

            if(i == n or j == n):
                return i == n and j == n

            if start[i] != target[j]:
                return False

            if start[i] == 'L' and j > i:
                return False

            if start[i] == 'R' and j < i:
                return False

            i+=1
            j+=1

        return True