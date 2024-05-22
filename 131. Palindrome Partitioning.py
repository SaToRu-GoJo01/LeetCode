class Solution:
    def checkPalindrome(self,s,start,end) -> bool:
        while(start < end):
            if(s[start] != s[end]):
                return False
            start+=1
            end-=1
        return True
    def backtracking(self,result,current,s,start):
        if(start == len(s)):
            result.append(current[:])
            return
        for end in range(start,len(s)):
            if(self.checkPalindrome(s,start,end)):
                current.append(s[start:end+1])
                self.backtracking(result,current,s,end+1)
                current.pop()
    def partition(self, s: str) -> List[List[str]]:
        result = []
        current = []
        self.backtracking(result,current,s,0)
        return result
