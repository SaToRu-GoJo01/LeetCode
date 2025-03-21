// class Solution {
//     public List<String> findAllRecipes(String[] recipes, List<List<String>> ingredients, String[] supplies) {
//         HashSet<String> suppliesSet = new HashSet<>();
//         for (String item : supplies) {
//             suppliesSet.add(item);
//         }
//         int n = recipes.length;
//         int count = n;
//         List<String> ans = new ArrayList<>();
//         boolean[] cooked = new boolean[n];
//         while(count != 0){
//             for(int i = 0; i < n; i++){
//                 if(cooked[i]){
//                     continue;
//                 }
//                 boolean made = true;
//                 for(String j:ingredients.get(i)){
//                     if(!suppliesSet.contains(j)){
//                         made = false;
//                         break;
//                     }
//                 }
//                 if(made){
//                     suppliesSet.add(recipes[i]);
//                     ans.add(recipes[i]);
//                     cooked[i] = true;
//                 }
//             }
//             count--;
//         }
//         return ans;
//     }
// }
class Solution {
    private boolean dfs(String node, Map<String, List<String>> adjList, Map<String, Boolean> visited) {
        if (visited.containsKey(node))
            return visited.get(node);
        visited.put(node, false);
        if (!adjList.containsKey(node))
            return false;

        for (String nextNode : adjList.get(node)) {
            if (!dfs(nextNode, adjList, visited))
                return false;
        }

        visited.put(node, true);
        return true;
    }

    public List<String> findAllRecipes(String[] recipes, List<List<String>> ingredients, String[] supplies) {
        int n = recipes.length;
        Map<String, List<String>> adjList = new HashMap<>();
        Map<String, Boolean> visited = new HashMap<>();

        for (String s : supplies) {
            visited.put(s, true);
        }

        for (int i = 0; i < n; i++) {
            if (!adjList.containsKey(recipes[i])) {
                adjList.put(recipes[i], new ArrayList<>());
            }

            for (String s : ingredients.get(i)) {
                adjList.get(recipes[i]).add(s);
            }
        }

        List<String> canMake = new ArrayList<>();

        for (String s : recipes) {
            if (dfs(s, adjList, visited)) {
                canMake.add(s);
            }
        }

        return canMake;
    }
}