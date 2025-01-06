class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        n = len(boxes)
        LR = [0] * n
        RL = [0] * n
        count = 0
        prev = -1
        for index,i in enumerate(boxes):
            if prev != -1:
                LR[index] = (index - prev) * count + LR[prev]
                if i == '1':
                    prev = index
                    count += 1
            elif i == '1':
                prev = index
                count += 1
        prev = -1
        count = 0
        for i in range(len(boxes)-1,-1,-1):
            if prev != -1:
                RL[i] = (prev - i) * count + RL[prev]
                if boxes[i] == '1':
                    prev = i
                    count += 1
            elif boxes[i] == '1':
                prev = i
                count += 1
        ans = []
        for i in range(len(boxes)):
            ans.append(LR[i]+RL[i])
        return ans