class Solution:
    def numTeams(self, rating: List[int]) -> int:
        result = 0
        for j in range(1,len(rating)-1):
            i,k = j-1,j+1
            smallerCount = 0
            biggerCount = 0
            Big = 0
            Small = 0
            while i >= 0:
                if rating[i] < rating[j]:
                    smallerCount+=1
                else:
                    Big+=1
                i-=1
            while k <= len(rating)-1:
                if rating[j] < rating[k]:
                    biggerCount+=1
                else:
                    Small+=1
                k+=1
            result+=(smallerCount*biggerCount)+(Big*Small)
        return result
