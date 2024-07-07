class Solution:
    def validStrings(self, n: int) -> List[str]:
        def getAllStrings(n,string):
            if len(string) == n:
                result.append(string)
                return
            if string[-1] == '0':
                getAllStrings(n,string+'1')
            else:
                getAllStrings(n,string+'0')
                getAllStrings(n,string+'1')
        result = []
        getAllStrings(n,"0")
        getAllStrings(n,"1")
        return result
