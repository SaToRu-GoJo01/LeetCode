class Solution:
    def clearDigits(self, s: str) -> str:
        stack = []
        for i in s:
            if i not in ['0','1','2','3','4','5','6','7','8','9']:
                stack.append(i)
            else:
                stack.pop()
        return ''.join(stack)