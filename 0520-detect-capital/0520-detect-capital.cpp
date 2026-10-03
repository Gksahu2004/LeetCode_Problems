class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word[0] >= 97 && word[0] <= 122){
            for(int i = 1; i<word.size(); i++){
                if(word[i] < 97 || word[i] > 122) {
                    return false;
                }
            }
        }
        else if (word[0] >= 65 && word[0] <= 90){
            if(word[1] >= 97 && word[1] <=122){
                for(int i = 2; i<word.size(); i++){
                    if(word[i] < 97 || word[i] > 122) {
                        return false;
                    }
                }
            }
            else{
                for(int i = 2; i<word.size(); i++){
                    if(word[i] < 65 || word[i] > 90) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};