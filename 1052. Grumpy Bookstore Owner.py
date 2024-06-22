class Solution:
    def maxSatisfied(self, customers: List[int], grumpy: List[int], minutes: int) -> int:
        if minutes == len(customers):
            return sum(customers)
        n = len(customers)
        sumWithoutIntervention = sum(customers[i] for i in range(n) if grumpy[i] == 0)

        additional_sum = 0
        maxAdditional_sum = 0

        for i in range(minutes):
            if grumpy[i] == 1:
                additional_sum += customers[i]
            maxAdditional_sum = max(maxAdditional_sum,additional_sum)
        
        for i in range(minutes,len(customers)):
            if grumpy[i] == 1:
                additional_sum += customers[i]
            if grumpy[i-minutes] == 1:
                additional_sum -= customers[i - minutes]
            maxAdditional_sum = max(maxAdditional_sum,additional_sum)
        
        return sumWithoutIntervention + maxAdditional_sum
