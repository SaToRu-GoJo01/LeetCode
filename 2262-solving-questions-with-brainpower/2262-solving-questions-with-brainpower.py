class Solution: 
    def mostPoints(self, questions: List[List[int]]) -> int:
        n = len(questions)
        dp = [-1] * n
        def solve(curr):
            if curr >= n:
                return 0
            
            if dp[curr] != -1:
                return dp[curr]

            points,brainpower = questions[curr]
            solved = points + solve(curr + brainpower + 1)
            skip = solve(curr + 1)

            dp[curr] = max(solved,skip)
            return dp[curr]

        return solve(0)