class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        int size = words.size();
        for(int i = 0; i<size; i++){
            string str = "";
            int n = words[i].size();
            for(int j = 0; j<n; j++){
                str += vec[words[i][j] - 'a'];
            }
            st.insert(str);
        }

        return st.size();
    }
};