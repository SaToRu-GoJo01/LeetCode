class Solution:
    def countAndSay(self, n: int) -> str:
        def solve(string,x):
            print(string,x)
            if x == n:
                return string
            new = ""
            prev = string[0]

            count = 0

            for i in string:
                if prev == i:
                    count += 1
                else:
                    new = new + str(count) + str(prev)
                    prev = i
                    count = 1
            new = new + str(count) + str(prev)

            return solve(new,x + 1)
        return solve("1",1)