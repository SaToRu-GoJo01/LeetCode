class Solution:
    def reverseParentheses(self, s: str) -> str:
        stack = []
        s = list(s)
        i=0
        for i in range(len(s)):
            if s[i] == "(":
                stack.append(i)
            elif s[i] == ")":
                start = stack.pop()
                end = i
                s[start] = ""
                s[end] = ""
                s[start:end] = s[start:end][::-1]
        return "".join(s)
