class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []
        def makeParenthesis(string,count,open,close):
            if open < close:
                return
            if count < 0:
                return
            if len(string) == 2*n:
                if count == 0:
                    result.append(string)
                return
            makeParenthesis(string+"(",count+1,open+1,close)
            makeParenthesis(string+")",count-1,open,close+1)
            return
        makeParenthesis("",0,0,0)
        return result
