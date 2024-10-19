class Solution {
     public char findKthBit(int n, int k) {
        StringBuilder str = new StringBuilder("0");
        for(int i = 0; i<n-1; i++){
            StringBuilder inverted = new StringBuilder();
            for(int j = 0; j<str.length(); j++){
                if(str.charAt(j) == '0')
                    inverted.append('1');
                else
                    inverted.append('0');
            }
            str = str.append('1').append(inverted.reverse());
        }
        return str.charAt(k-1);
    }
}