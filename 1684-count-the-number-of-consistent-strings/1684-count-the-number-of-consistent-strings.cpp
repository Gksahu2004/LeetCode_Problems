class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        for(int i = 0; i<allowed.size(); i++){
            st.insert(allowed[i]);
        }
        int count = 0;
        for(int i = 0; i<words.size(); i++){
            int flag = 0;
            for(int j = 0; j<words[i].size(); j++){
                if(st.find(words[i][j]) == st.end()){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                count++;
            }
        }

        return count;
    }
};