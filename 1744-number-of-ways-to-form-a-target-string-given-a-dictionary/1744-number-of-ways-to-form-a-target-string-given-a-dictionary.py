class Solution:
    def numWays(self, words: List[str], target: str) -> int:
        n = len(target)
        m = len(words[0])
        MOD = 10**9 + 7
        freq = [[0] * m for _ in range(n)]
        freq = [[0] * 26 for _ in range(m)]
        for word in words:
            for j, char in enumerate(word):
                freq[j][ord(char) - ord('a')] += 1

        memo = [[-1] * m for _ in range(n)]

        def solve(i,j):
            if i == n:
                return 1
            if j == m:
                return 0
            if memo[i][j] != -1:
                return memo[i][j]
            not_taken = solve(i,j+1) % MOD
            taken = 0
            if freq[j][ord(target[i]) - ord('a')] > 0:
                taken = (freq[j][ord(target[i]) - ord('a')] * solve(i + 1, j + 1)) % MOD
            memo[i][j] = (not_taken + taken)%MOD
            return memo[i][j]

        return solve(0,0)