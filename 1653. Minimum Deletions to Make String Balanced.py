class Solution:
    def minimumDeletions(self, s: str) -> int:
        stack = []
        deletion=0

        for char in s:
            if not stack:
                stack.append(char)
            elif stack[-1] == 'a':
                stack.append(char)
            elif char == 'b':
                stack.append(char)
            elif char == 'a':
                stack.pop()
                deletion += 1

        return deletion
