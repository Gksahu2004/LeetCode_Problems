class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector <int>> ans;
        for(int i = 1; i<=numRows; i++){
            vector<int> vec;
            int value = 1;
            vec.push_back(value);
            for(int j = 1; j<i; j++){
                value = value * (i - j);
                value = value / j;
                vec.push_back(value);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};