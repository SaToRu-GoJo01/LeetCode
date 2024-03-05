public class Solution {
    public int minimumLength(String s) {
        int left = 0, right = s.length()-1;
        while(left < right){
            if(s.charAt(left) == s.charAt(right)){
                char ch = s.charAt(left);
                while(left <= right && s.charAt(left) == ch){
                    left+=1;
                }
                while(left <= right && s.charAt(right) == ch){
                    right-=1;
                }
            }
            else{
                break;
            }
        }
        return right - left + 1;
    }
}
