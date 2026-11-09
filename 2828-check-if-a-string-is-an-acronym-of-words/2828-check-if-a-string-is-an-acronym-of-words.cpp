class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string str = "";
        int size = words.size();
        for(int i = 0; i<size; i++){
            str += words[i][0];
        }
        if(str == s){
            return true;
        }
        return false;
    }
};