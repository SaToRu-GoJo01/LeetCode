class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        word3=""
        i= 0
        while i < len(word1) or i < len(word2):
            if i < len(word1):
                word3 += word1[i]
            if i < len(word2):
                word3 += word2[i]
            i += 1
        # while i<len(word1):
        #     word3 += word1[i]
        #     i+=1
        # while i<len(word2):
        #     word3 += word2[i]
        #     i+=1
        return word3
            
        
