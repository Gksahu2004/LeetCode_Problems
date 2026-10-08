class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> vec;
        int m = matrix.size();
        for(int i = 0; i<m; i++){
            int count = 0;
            for(auto it: matrix[i]){
                if (it == 1){
                    count++;
                }
            }
            vec.push_back(count);
        }

        return vec;
    }
};