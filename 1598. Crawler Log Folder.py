class Solution:
    def minOperations(self, logs: List[str]) -> int:
        folders = 0
        for i in logs:
            if i == "../" and folders > 0:
                folders -= 1
            elif i != "./" and i != "../":
                folders += 1
        
        return folders
