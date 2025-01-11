class Solution:
    def letterCombinations(self, d: str) -> List[str]:
        digits = {}
        digits['2'] = "abc"
        digits['3'] = "def"
        digits['4'] = "ghi"
        digits['5'] = "jkl"
        digits['6'] = "mno"
        digits['7'] = "pqrs"
        digits['8'] = "tuv"
        digits['9'] = "wxyz"
        digits['1'] = " "
        ans = []

        for i in range(4-len(d)):
            d += '1'

        for first in digits[d[0]]:
            if first == ' ':
                break
            temp = ""
            temp = temp + first
            for second in digits[d[1]]:
                if second == ' ':
                    ans.append(temp)
                    break
                temp2 = temp + second
                for third in digits[d[2]]:
                    if third == ' ':
                        ans.append(temp2)
                        break
                    temp3 = temp2 + third
                    for fourth in digits[d[3]]:
                        if fourth == ' ':
                            ans.append(temp3)
                            break
                        temp4 = temp3 + fourth
                        ans.append(temp4)
                        # print(temp4)]8

        return ans