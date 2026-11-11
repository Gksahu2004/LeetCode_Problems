class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int cols = grid[0].size();
        int rows = grid.size();
        for(int i = 0; i<rows; i++){
            sort(grid[i].begin(), grid[i].end());
        }

        int sum = 0;
        for(int i = cols-1; i>=0; i--){
            int maxval = 0;
            for(int j = 0; j<rows; j++){
                maxval = max(maxval, grid[j][i]);
            }
            sum += maxval;
        }

        return sum;
    }
};