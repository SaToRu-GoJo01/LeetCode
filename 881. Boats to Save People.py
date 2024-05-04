class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort()
        ans = 0
        ending = len(people)-1
        starting = 0
        while(starting <= ending):
            if(limit - people[ending] >= people[starting]):
                starting+=1
                ending-=1
            elif(limit - people[ending] < people[starting]):
                ending-=1
            ans+=1
        return ans
