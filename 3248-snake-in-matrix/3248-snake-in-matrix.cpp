class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0, j = 0;
        int size = commands.size();
        for(int k = 0; k<size; k++){
            string str = commands[k];
            if(str == "UP"){
                i--;
            }
            else if(str == "RIGHT"){
                j++;
            }
            else if(str == "DOWN"){
                i++;
            }
            else if(str == "LEFT"){
                j--;
            }
            else{
                return -1;
            }
        }

        return ((i * n) + j);
    }
};