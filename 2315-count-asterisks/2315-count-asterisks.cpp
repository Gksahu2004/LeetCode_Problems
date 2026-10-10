class Solution {
public:
    int countAsterisks(string s) {
        int asterisks = 0;
        int flag = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '|'){
                flag = 1;
                i++;
                while(i < s.size() && s[i] != '|'){
                    i++;
                }
                flag = 0;
            }
            else if (s[i] == '*'){
                asterisks ++;
            }
        }

        return asterisks;
    }
};