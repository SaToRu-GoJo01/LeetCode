class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        d = defaultdict()
        for i in range(len(names)):
            d[heights[i]] = names[i]
        heights.sort(reverse=True)
        return [d[height] for height in heights]
