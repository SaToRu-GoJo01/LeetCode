# class Solution:
#     def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
#         adj = defaultdict(list)
#         for u,v,w in times:
#             adj[u].append((v,w))
#         visited = [float('inf')]*n
#         def disj():
#             pq = []
#             pq.append((0,k))
#             visited[k] = 0
#             while pq:
#                 currTime,nextTime = heapq.heappop(pq)
#                 for neighbour in adj[currTime]:
#                     nextNode,nextTime = neighbour
#                     if visited[nextNode] <= currTime + nextTime:
#                         continue
#                     else:
#                         visited[nextNode] = currTime + nextTime
#                         heapq.heappush(pq,(visite[nextNode],nextNode))
#             return max(visited)
#         ans = disj()
#         return ans if ans != float('inf') else -1


import heapq
from collections import defaultdict
from typing import List

class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        # Adjacency list
        adj = defaultdict(list)
        for u, v, w in times:
            adj[u].append((v, w))
        
        # Distance array (1-based index, nodes are from 1 to n)
        visited = [float('inf')] * (n + 1)
        
        # Dijkstra's algorithm
        def dijkstra():
            pq = []
            heapq.heappush(pq, (0, k))  # (current time, start node)
            visited[k] = 0
            
            while pq:
                currTime, currNode = heapq.heappop(pq)
                
                # Explore all neighbors of the current node
                for nextNode, travelTime in adj[currNode]:
                    newTime = currTime + travelTime
                    # If we found a faster way to the next node, update
                    if visited[nextNode] > newTime:
                        visited[nextNode] = newTime
                        heapq.heappush(pq, (newTime, nextNode))
        
        dijkstra()
        
        # Find the longest time in visited array, ignoring index 0
        maxTime = max(visited[1:])
        return maxTime if maxTime != float('inf') else -1
