class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, int> mpp;
        vector<vector<int>> vec;

        for(int i = 0; i<items1.size(); i++){
            mpp[items1[i][0]] += items1[i][1];
        }
        for(int i = 0; i<items2.size(); i++){
            mpp[items2[i][0]] += items2[i][1];
        }

        for(auto it: mpp){
            vec.push_back({it.first, it.second});
        }

        sort(vec.begin(), vec.end());

        return vec;
    }
};