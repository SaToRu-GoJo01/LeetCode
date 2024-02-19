class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        total_gas,curr_gas,total_cost = 0,0,0
        starting_point = 0
        for i in range(len(gas)):
            total_gas += gas[i]
            total_cost += cost[i]
            curr_gas += gas[i]-cost[i]
            if(curr_gas < 0):
                starting_point = i+1
                curr_gas = 0
        if (total_gas - total_cost >= 0):
            return starting_point
        return -1
