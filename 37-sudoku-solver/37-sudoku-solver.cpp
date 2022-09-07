class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(possible(board,i,j,c)){
                            board[i][j]=c;
                            if(solve(board)==true) return true;
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    bool possible(vector<vector<char>>& board,int row,int col,char c){
        for(int s=0;s<board.size();s++){
            if(board[row][s]==c) return false;
            if(board[s][col]==c) return false;
            if(board[3*(row/3) + s/3][3*(col/3)+s%3]==c) return false;
        }
        return true;
    }
};