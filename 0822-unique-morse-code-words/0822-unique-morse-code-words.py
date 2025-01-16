class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        st = set()
        code = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        for word in words:
            string = ""
            for ch in word:
                string += code[ord(ch)-ord('a')]
            st.add(string)
        return len(st)