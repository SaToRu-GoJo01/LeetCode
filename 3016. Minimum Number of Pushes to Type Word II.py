class Solution:
    def minimumPushes(self, word: str) -> int:
        count = Counter(word)
        sorted_count = sorted(count.items(),key = lambda x:x[1],reverse = True)
        counter = 2
        result = 0
        mul = 1
        for key,value in sorted_count:
            if counter > 9:
                counter = 2
                mul+=1
            result+=(value*mul)
            counter+=1
        return result
