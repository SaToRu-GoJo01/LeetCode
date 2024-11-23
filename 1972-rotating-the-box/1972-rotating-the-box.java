class Solution {
    public char[][] rotateTheBox(char[][] box) {
        int r = box.length;
        int c = box[0].length;
        for(int i=0;i<r;i++){
            int count = 0;
            int j_y = c-1;
            for(int j=c-1;j>=0;j--){
                if(box[i][j] == '#'){
                    box[i][j] = '.';
                    box[i][j_y--] = '#';
                }
                else if(box[i][j] == '*'){
                    j_y = j-1;
                }
            }
        }
        char[][] result = new char[c][r];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result[j][r-i-1] = box[i][j];
            }
        }
        return result;
    }
}