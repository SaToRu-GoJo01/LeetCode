class Solution {
    public long minimumSteps(String s) {
        long one = 0;
        long count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == '1'){
                one++;
            }
            else{
                count += one;
            }
        }
        return count;
    }
}