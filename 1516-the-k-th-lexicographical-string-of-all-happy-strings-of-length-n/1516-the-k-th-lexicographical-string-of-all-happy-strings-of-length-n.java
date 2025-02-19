class Solution {
    private int count = 0;
    private String ans = null;
    public void recursion(String abc,String curr,char added,int n,int k){
        if(ans != null){
            return;
        }
        if(curr.length() == n){
            ++count;
            if(count == k){
                ans = curr;
            }
            return;
        }
        for(int i = 0;i<3;i++){
            if(added != abc.charAt(i)){
                recursion(abc,curr+abc.charAt(i),abc.charAt(i),n,k);
            }
        }
    }
    public String getHappyString(int n, int k) {
        recursion("abc","",'_',n,k);
        if(ans != null){
            return ans;
        }
        return "";
    }
}