class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        allowed_set = set(allowed)
        count = 0
        include = True

        for word in words:
            word_set = set(word)
            for char in word_set:
                if char not in allowed_set:
                    include = False
                    break
                else:
                    include = True
            if include:
                count+=1
        
        return count