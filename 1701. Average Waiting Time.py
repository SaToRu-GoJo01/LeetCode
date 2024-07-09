class Solution:
    def averageWaitingTime(self, customers: List[List[int]]) -> float:
        tWaitingTime = 0
        currentTime = customers[0][0]
        for initial,final in customers:
            if currentTime < initial:
                currentTime = initial
            currentTime += final
            tWaitingTime += currentTime - initial
        return tWaitingTime / len(customers)
