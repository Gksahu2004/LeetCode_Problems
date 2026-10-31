class Solution {
public:
    string interpret(string command) {
        string str = "";

        for(int i = 0; i<command.size(); i++){
            if(command[i] == 'G'){
                str += "G";
            }
            else if(command[i] == '('){
                if(command[i+1] == ')'){
                    str += "o";
                    i += 1;
                }
                else{
                    str += "al";
                    i += 3;
                }
            }
        }
        return str;
    }
};