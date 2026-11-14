class Solution {
public:
    string freqAlphabets(string s) {
        int i = s.size()-1;
        string str = "";
        while(i >= 0){
            if(s[i] == '#'){
                int num = (s[i-2]-'0') * 10;
                num += s[i-1]-'0';
                str = char('a'+num-1) + str;
                i-=3;
            }
            else{
                str = char('a'+s[i]-'1') + str;
                i--;
            }
        }

        return str;
    }
};