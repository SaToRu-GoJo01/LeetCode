class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        for index,word in enumerate(sentence.split(' ')):
            if word.find(searchWord) == 0:
                return index + 1
        return -1