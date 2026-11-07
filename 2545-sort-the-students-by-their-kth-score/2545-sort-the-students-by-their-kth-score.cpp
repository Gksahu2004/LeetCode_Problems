class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int rows = score.size();
        for(int i = 0; i<rows; i++){
            bool flag = false;
            for(int j = 0; j < rows-i-1; j++){
                if(score[j][k] < score[j+1][k]){
                    swap(score[j], score[j+1]);
                    flag = true;
                }
            }
            if(flag == false){
                break;
            }
        }

        return score;
    }
};