class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        # while part in s:
        #     s = s.replace(part,"",1)
        # return s

        # OR

        # STACK
        plen = len(part)
        stack = []
        for char in s:
            stack.append(char)
            if len(stack) >= plen and ''.join(stack[-plen:]) == part:
                del(stack[-plen:])
        return ''.join(stack)