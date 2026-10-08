class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> vec;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i<m; i++){
            int count = 0;
            for(int j = 0; j<n; j++){
                if(matrix[i][j] == 1){
                    count++;
                }
            }
            vec.push_back(count);
        }

        return vec;
    }
};