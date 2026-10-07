class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int size = words.size();
        int wordLen;
        vector<int> vec;

        for(int i = 0; i<size; i++){
            wordLen = words[i].size();
            for(int j = 0; j<wordLen; j++){
                if(words[i][j] == x){
                    vec.push_back(i);
                    break;
                }
            }
        }

        return vec;
    }
};