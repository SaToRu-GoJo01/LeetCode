class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> row,column;
        unordered_map<char,int> box;
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++)
            {
                if(board[i][j] != '.'){
                    row[board[i][j]]++;
                }
                if(board[j][i] != '.'){
                    column[board[j][i]]++;
                }
                if(row[board[i][j]] > 1) {
                    return false;
                }
                if(column[board[j][i]] > 1) {
                    return false;
                }
            }
            row.clear();
            column.clear();
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                box.clear();
                for(int a = i;a<i+3;a++){
                    for(int b = j;b<j+3;b++){
                        if(board[a][b] != '.') box[board[a][b]]++;
                        if(box[board[a][b]] > 1) return false;
                    }
                }
            }
        }
        return true;
    }
};
