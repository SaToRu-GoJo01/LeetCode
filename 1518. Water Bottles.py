class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        cannotExchange = 0
        result = 0
        while numExchange <= numBottles + cannotExchange:
            result += numBottles
            sum = numBottles + cannotExchange
            numBottles = (sum) // numExchange
            cannotExchange = (sum) % numExchange
            print(numBottles,cannotExchange)
        return result + numBottles
