class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> mpp;
        int size = paths.size();
        for(int i = 0; i<size; i++){
            mpp[paths[i][0]] = paths[i][1];
        }
        for(auto it: mpp){
            string str = it.second;
            while(mpp.find(str) != mpp.end()){
                str = mpp[str];
            }
            return str;
        }
        return "";
    }
};