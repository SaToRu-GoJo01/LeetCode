class Solution:
    def getAncestors(self, n: int, edges: List[List[int]]) -> List[List[int]]:
        d = defaultdict(list)
        for i in edges:
            d[i[1]].append(i[0])

        ancestors = [set() for _ in range(n)]

        def traverse(node:int,start:int):
            for ancestor in d[node]:
                if ancestor not in ancestors[start]:
                    ancestors[start].add(ancestor)
                    traverse(ancestor,start)

        for i in range(n):
            traverse(i,i)

        return [sorted(list(ancestor_set)) for ancestor_set in ancestors]
