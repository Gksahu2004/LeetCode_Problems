class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int size = paths.size();
        string str = paths[0][1];
        while(1){
            int i;
            for(i = 1; i<size; i++){
                if(paths[i][0] == str){
                    str = paths[i][1];
                    break;
                }
            }
            if(i == size){
                break;
            }
        }
        return str;
    }
};