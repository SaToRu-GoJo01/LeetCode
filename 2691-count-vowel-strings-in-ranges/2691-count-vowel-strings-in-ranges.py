from typing import List

class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        vowels = {'a', 'e', 'i', 'o', 'u'}
        n = len(words)
        prefix_sum = [0] * (n+1)
        prev = 0
        for i in range(n):
            prefix_sum[i+1] = prefix_sum[i] + (1 if words[i][0] in vowels and words[i][-1] in vowels else 0)

        ans = []
        print(prefix_sum)
        for l, r in queries:
            ans.append(prefix_sum[r+1] - prefix_sum[l])
        return ans