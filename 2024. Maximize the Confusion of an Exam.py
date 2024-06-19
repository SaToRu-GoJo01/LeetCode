class Solution:
    def maxConsecutiveAnswers(self, answerKey: str, k: int) -> int:
        def adjust(ch):
            left = 0
            maxConsecutive = 0
            flipped = 0
            for right in range(len(answerKey)):
                if ch != answerKey[right]:
                    flipped+=1
                while flipped > k:
                    if answerKey[left] != ch:
                        flipped-=1
                    left+=1
                maxConsecutive = max(maxConsecutive,right-left+1)
            return maxConsecutive
        return max(adjust('T'),adjust('F'))
