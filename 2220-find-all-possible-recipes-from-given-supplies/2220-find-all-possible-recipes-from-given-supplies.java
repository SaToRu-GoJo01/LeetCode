class Solution {
    public List<String> findAllRecipes(String[] recipes, List<List<String>> ingredients, String[] supplies) {
        HashSet<String> suppliesSet = new HashSet<>();
        for (String item : supplies) {
            suppliesSet.add(item);
        }
        int n = recipes.length;
        int count = n;
        List<String> ans = new ArrayList<>();
        boolean[] cooked = new boolean[n];
        while(count != 0){
            for(int i = 0; i < n; i++){
                if(cooked[i]){
                    continue;
                }
                boolean made = true;
                for(String j:ingredients.get(i)){
                    if(!suppliesSet.contains(j)){
                        made = false;
                        break;
                    }
                }
                if(made){
                    suppliesSet.add(recipes[i]);
                    ans.add(recipes[i]);
                    cooked[i] = true;
                }
            }
            count--;
        }
        return ans;
    }
}