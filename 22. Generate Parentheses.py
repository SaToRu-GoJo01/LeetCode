class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []
        def makeParenthesis(string,count):
            if count < 0:
                return
            if len(string) == 2*n:
                if count == 0:
                    result.append(string)
                return
            makeParenthesis(string+"(",count+1)
            makeParenthesis(string+")",count-1)
            return
        makeParenthesis("",0)
        return result
