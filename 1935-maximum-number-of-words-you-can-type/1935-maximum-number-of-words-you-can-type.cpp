class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> st;
        int n1 = text.size();
        int n2 = brokenLetters.size();
        for(int i = 0; i<n2; i++){
            st.insert(brokenLetters[i]);
        }

        int count = 0;
        int i = 0;
        while(i < n1){
            bool flag = true;
            while(i < n1 && text[i] != ' '){
                if(flag == true && st.find(text[i]) != st.end()){
                    flag = false;
                }
                i++;
            }
            if(flag == true) count++;
            if(i >= n1) break;
            i++;
        }

        return count;
    }
};