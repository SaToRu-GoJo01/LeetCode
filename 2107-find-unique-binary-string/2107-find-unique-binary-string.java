class Solution {
    private String ans = null;
    public void recursion(HashSet<String> set, String curr, int currLength, int n){
        if(ans != null){
            return;
        }
        if(n == currLength){
            if(set.contains(curr)){
                return;
            }
            else{
                ans = curr;
                return;
            }
        }
        // with 0
        recursion(set,curr+"0",currLength+1,n);
        // with 1
        recursion(set,curr+"1",currLength+1,n);
    }
    public String findDifferentBinaryString(String[] nums) {
        HashSet<String> set = new HashSet<>();
        set.addAll(Arrays.asList(nums));
        recursion(set,"",0,nums.length);
        return ans;
    }
}