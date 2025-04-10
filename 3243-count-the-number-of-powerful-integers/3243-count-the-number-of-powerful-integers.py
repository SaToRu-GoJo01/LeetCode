class Solution:
    def numberOfPowerfulInt(self, start: int, finish: int, limit: int, s: str) -> int:
        def solve(x) -> int:
            n = len(x)
            m = len(s)
            if n < m:
                return 0
            count = 0
            remaining = n - m
            for i in range(remaining):
                digit = int(x[i])
                if digit <= limit:
                    count += digit * pow(limit + 1, remaining - i - 1)
                else:
                    count += pow(limit + 1, remaining - i)
                    return count

            if x[remaining:] >= s:
                count += 1
            
            return count

        return solve(str(finish)) - solve(str(start - 1))