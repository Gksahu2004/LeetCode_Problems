class Solution {
public:
    string clearDigits(string s) {
        stack<char> stk;
        for(int i = 0; i<s.size(); i++){
            if(s[i]-'0' >= 0 && s[i]-'0' <= 9){
                if(stk.empty()){
                    return "";
                }
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
        string str = "";
        while(!stk.empty()){
            str = stk.top() + str;
            stk.pop();
        }

        return str;
    }
};