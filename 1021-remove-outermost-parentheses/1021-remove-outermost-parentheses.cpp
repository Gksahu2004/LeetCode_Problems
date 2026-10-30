class Solution {
public:
    string removeOuterParentheses(string s) {
        string str = "";

        if(s.size() == 0 || s.size() == 2) return str;
        
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                if(count != 0){
                    str += s[i];
                }
                count++;
            }
            else{
                count--;
                if(count != 0){
                    str += s[i];
                }
            }
        }

        return str;
    }
};