class Solution {
public:
    bool solve(vector<vector<char>>& board,string word,int i,int j,int curr){
        if(curr == word.size()-1) return true;
        char currch = board[i][j];
        board[i][j] = '$';
        if(i+1 < board.size() && board[i+1][j] == word[curr+1] && solve(board,word,i+1,j,curr+1)){
            return true;
        }
        if(i-1 >= 0 && board[i-1][j] == word[curr+1] && solve(board,word,i-1,j,curr+1)){
            return true;
        }
        if(j+1 < board[0].size() && board[i][j+1] == word[curr+1] && solve(board,word,i,j+1,curr+1)){
            return true;
        }
        if(j-1 >= 0 && board[i][j-1] == word[curr+1] && solve(board,word,i,j-1,curr+1)){
            return true;
        }
        board[i][j] = currch;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == word[0] && solve(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};
