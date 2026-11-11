class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> vec;
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i = 0; i<rows; i++){
            int q = 0;
            int minval = matrix[i][0];
            for(int j = 1; j<cols; j++){
                if(minval > matrix[i][j]){
                    minval = matrix[i][j];
                    q = j;
                }
            }
            int maxval = 0;
            for(int k = 0; k<rows; k++){
                maxval = max(maxval, matrix[k][q]);
            }

            if(minval == maxval){
                vec.push_back(minval);
            }
        }

        return vec;
    }
};