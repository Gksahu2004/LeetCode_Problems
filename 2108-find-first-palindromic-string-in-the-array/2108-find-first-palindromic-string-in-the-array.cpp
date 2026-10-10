class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i<words.size(); i++){
            string str(words[i].rbegin(), words[i].rend());
            if(words[i] == str){
                return words[i];
            }
        }

        return "";
    }
};