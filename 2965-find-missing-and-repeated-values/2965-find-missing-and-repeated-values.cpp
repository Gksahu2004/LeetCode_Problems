class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int wrongsum = 0;
        unordered_set<int> st;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(st.find(grid[i][j]) != st.end()){
                    ans.push_back(grid[i][j]);
                }
                else{
                    wrongsum += grid[i][j];
                    st.insert(grid[i][j]);
                }
            }
        }

        n = n * n;
        int sum = (n*(n+1))/2;

        ans.push_back(sum-wrongsum);

        return ans;
    }
};