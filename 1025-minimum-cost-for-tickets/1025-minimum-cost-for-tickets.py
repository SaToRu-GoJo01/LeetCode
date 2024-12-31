class Solution:
    def mincostTickets(self, days: List[int], costs: List[int]) -> int:
        day_set = set(days)
        memo = defaultdict(int)
        def solve(curr):
            if curr > days[-1]:
                return 0
            if curr in memo:
                return memo[curr]
            if curr in day_set:
                one_day = costs[0] + solve(curr + 1)
                seven_day = costs[1] + solve(curr + 7)
                thirty_day = costs[2] + solve(curr + 30)
                memo[curr] = min(one_day,seven_day,thirty_day)
            else:
                memo[curr] = solve(curr + 1)
            
            return memo[curr]
            
        return solve(days[0])