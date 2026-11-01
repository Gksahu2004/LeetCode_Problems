class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for(int i = 0; i<rows/2; i++){
            swap(matrix[i] , matrix[rows-i-1]);
        }
        
        for(int i = 0; i<rows; i++){
            for(int j = i+1; j<cols; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }   
    }
};