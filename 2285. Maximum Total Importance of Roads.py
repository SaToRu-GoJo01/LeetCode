class Solution(object):
    def maximumImportance(self, n, roads):
        degree = {}
        for i in range(len(roads)):
            degree[roads[i][0]] = degree.get(roads[i][0],0)+1
            degree[roads[i][1]] = degree.get(roads[i][1],0)+1

        sortedDict = sorted(degree.items(),key = lambda item:item[1],reverse=True)
        importance={}
        importanceValue = n
        for city,_ in sortedDict:
            importance[city] = importanceValue
            importanceValue-=1

        result = 0
        for road in roads:
            result += importance[road[0]] + importance[road[1]]
        return result
