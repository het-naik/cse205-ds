class Solution {
    public:
    bool isSafe(vector<vector<char>>& board,int row, int col,char ch){
        for(int i = 0; i < board.size(); i++){
            if(board[row][i] == ch && i != col){
                return false;
            }
            if(board[i][col] == ch && i != row){
                return false;
            }
            if(board[3*(row/3)+ i/3][3*(col/3) + i%3] == ch && (3*(row/3) + i/3)!=row && (3*(col/3)+i%3)!=col){
                return false;
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                char ch = board[i][j];

                if(ch != '.' && !isSafe(board,i,j,ch)){
                    return false;
                }
            }
        }
        return true;
    }
};