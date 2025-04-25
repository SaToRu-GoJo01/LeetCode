class Solution:
    def countInterestingSubarrays(self, nums: List[int], modulo: int, k: int) -> int:
        is_interesting = [1 if num % modulo == k else 0 for num in nums]
        print(is_interesting)
        current_sum = 0
        prefix_sum = defaultdict(int)
        prefix_sum[0] = 1
        result = 0

        for val in is_interesting:
            current_sum = (current_sum + val) % modulo
            target = (current_sum - k) % modulo
            result += prefix_sum[target]
            prefix_sum[current_sum] += 1
        
        return result