class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int mat[n][n];
        int row=0;
        while(row<n){
            for(int col=0;col<n;col++){
                mat[col][n-row-1]=matrix[row][col];
            }
            row++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=mat[i][j];
            }
        }
    }
};