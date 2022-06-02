class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0,col=matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++){
            if(target<=matrix[i][col]){
                row=i;
                break;
            } 
        }
        bool flag = false;
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[row][j]==target) flag=true;
        }
        return flag;
    }
};