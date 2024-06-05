class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        if len(words) == 1:
            return words[0]

        # map1 = {}
        # map2 = {}

        # for i in words[0]:
        #     map1[i] = map1.get(i,0)+1

        # for i in range(1,len(words)):
        #     map2 = {}

        #     for ch in words[i]:
        #         map2[ch] = map2.get(ch,0)+1
            
        #     for ch in map1.keys():
        #         if ch in map2:
        #             map1[ch] = min(map1[ch],map2[ch])
        #         else:
        #             map1[ch] = 0

        # ans = []
        # for i in map1.keys():
        #     for j in range(map1[i]):
        #         ans.append(i)
        # return ans

        ans = []
        chars = set(words[0])

        for char in chars:
            frequency = min([word.count(char) for word in words])
            ans += frequency * [char]
        
        return ans
