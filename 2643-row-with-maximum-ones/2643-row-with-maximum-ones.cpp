class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int maxcount = 0;
        int idx = 0;
        for(int i = 0; i<rows; i++){
            int count = 0;
            for(int j = 0; j<cols; j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > maxcount){
                maxcount = count;
                idx = i;
            }
        }

        return {idx, maxcount};
    }
};