class Solution {
public:
    bool validDigit(int n, int x) {
        int flag = 0;
        string s = to_string(n);
        char c = x + 48;
        if(s[0] == c){
            return false;
        }
        for(int i = 1; i<s.length(); i++){
            if(s[i] == c){
                return true;
            }
        }

        return false;
    }
};