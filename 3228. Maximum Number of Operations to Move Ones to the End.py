class Solution:
    def maxOperations(self, s: str) -> int:
        count_one = 0
        operations = 0
        n = len(s)
        for i in range(n):
            if s[i] == '1':
                count_one+=1
            else:
                if i+1 < n and s[i+1] == '1':
                    operations+=count_one
                elif i+1 == n:
                    operations+=count_one
        return operations
