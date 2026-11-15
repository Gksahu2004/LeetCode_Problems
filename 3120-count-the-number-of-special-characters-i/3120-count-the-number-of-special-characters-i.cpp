class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> st;
        int size = word.size();
        for(int i = 0; i<size; i++){
            st.insert(word[i]);
        }

        int count = 0;
        for(auto it : st){
            for(auto it2 : st){
                if(it+32 == it2){
                    count++;
                }
            }
        }

        return count;
    }
};