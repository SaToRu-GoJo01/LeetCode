class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        minDiff = float('inf')
        for i in range(len(arr)-1):
            diff = arr[i+1]-arr[i]
            minDiff = min(diff,minDiff)
        result = []
        for i in range(len(arr)-1):
            if minDiff == arr[i+1]-arr[i]:
                result.append([arr[i],arr[i+1]])
        return result
