from collections import defaultdict
from typing import List

class Solution:
    def queryResults(self, limit: int, queries: List[List[int]]) -> List[int]:
        
        ball_color = {}
        
        color_count = defaultdict(int)
        
        unique_colors = set()
        
        result = []
        
        for ball, color in queries:
            
            if ball in ball_color:
                old_color = ball_color[ball]
                color_count[old_color] -= 1
                if color_count[old_color] == 0:
                    unique_colors.remove(old_color)
            
            
            ball_color[ball] = color
            color_count[color] += 1
            unique_colors.add(color)
            
            
            result.append(len(unique_colors))
        
        return result