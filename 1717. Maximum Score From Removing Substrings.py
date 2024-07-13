class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        result = 0
        if x > y:
            top = "ab"
            top_score = x
            bot = "ba"
            bot_score = y
        else:
            top = "ba"
            top_score = y
            bot = "ab"
            bot_score = x
        
        stack = []
        for char in s:
            if char == top[1] and stack and stack[-1] == top[0]:
                result += top_score
                stack.pop()
            else:
                stack.append(char)

        newStack = []
        for char in stack:
            if char == bot[1] and newStack and newStack[-1] == bot[0]:
                result += bot_score
                newStack.pop()
            else:
                newStack.append(char)
        return result
