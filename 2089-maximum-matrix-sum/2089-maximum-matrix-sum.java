class Solution {
    public long maxMatrixSum(int[][] matrix) {
        int negatives = 0;
        int less_negative = Integer.MIN_VALUE;
        int r = matrix.length;
        int c = matrix[0].length;
        long sum = 0;
        boolean zero = false;
        int less = Integer.MAX_VALUE;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j] == 0){
                    zero = true;
                }
                else if(matrix[i][j] < 0){
                    negatives++;
                    less_negative = Math.max(less_negative,matrix[i][j]);
                }
                else{
                    less = Math.min(less,matrix[i][j]);
                }
                sum += Math.abs(matrix[i][j]);
            }
        }
        System.out.println(sum + "," + negatives + "," + less + "," + less_negative);
        if(negatives % 2 == 0 || zero){
            return sum;
        }
        if(Math.abs(less_negative) > less){
            return sum - 2 * less;
        }
        return sum + 2 * less_negative;
    }
}