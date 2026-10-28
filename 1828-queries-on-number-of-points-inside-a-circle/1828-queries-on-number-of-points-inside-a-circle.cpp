class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i = 0; i<queries.size(); i++){
            int count = 0;
            for(int j = 0; j<points.size(); j++){
                int a = (points[j][0] - queries[i][0]);
                int b = (points[j][1] - queries[i][1]);
                if((a*a + b*b) <= queries[i][2]*queries[i][2]){
                    count++;
                }
            }
            ans.push_back(count);
        }

        return ans;
    }
};