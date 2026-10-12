class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26){
            return false;
        }
        unordered_set<char> st;
        for(int i = 0; i<sentence.size(); i++){
            st.insert(sentence[i]);
        }

        if(st.size() == 26){
            return true;
        }
        else{
            return false;
        }
    }
};