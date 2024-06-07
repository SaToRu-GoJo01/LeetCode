class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        dictionary_set = set(dictionary)
        words = sentence.split(' ')
        replaced_words = []

        for word in words:
            prefix_found = False
            for i in range(len(word)):
                if word[:i] in dictionary_set:
                    replaced_words.append(word[:i])
                    prefix_found = True
                    break
            if not prefix_found:
                replaced_words.append(word)
        return ' '.join(replaced_words)
