class Solution:
    def survivedRobotsHealths(self, positions: List[int], healths: List[int], directions: str) -> List[int]:
        def custom(item):
            return positions[item]
        n = len(positions)
        actual_index = [i for i in range(n)]
        
        actual_index.sort(key=custom)
        
        stack = []
        for i in actual_index:
            if directions[i] == 'R':
                stack.append(i)
            else:
                while stack:
                    if healths[i] > 0 and healths[stack[-1]] < healths[i]:
                        healths[stack[-1]] = 0
                        stack.pop()
                        healths[i]-=1
                    elif healths[i] > 0 and healths[stack[-1]] > healths[i]:
                        healths[stack[-1]] -= 1
                        healths[i] = 0
                    elif healths[i] > 0 and healths[stack[-1]] == healths[i]:
                        healths[stack[-1]] = 0
                        healths[i] = 0
                        stack.pop()
                    else:
                        break
        
        result = []
        for h in healths:
            if h > 0:
                result.append(h)

        return result
                    
        return []
