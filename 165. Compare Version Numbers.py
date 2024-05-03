class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        i,j=0,0
        while(i < len(version1) or j < len(version2)):
            num1,num2 = 0,0
            while i < len(version1) and version1[i] != '.':
                num1 = num1*10 + int(version1[i]) - int('0')
                i+=1
            while j < len(version2) and version2[j] != '.':
                num2 = num2*10 + int(version2[j]) - int('0')
                j+=1
            if num1 < num2:
                return -1
            elif num1 > num2:
                return 1
            i+=1
            j+=1
        return 0
            
