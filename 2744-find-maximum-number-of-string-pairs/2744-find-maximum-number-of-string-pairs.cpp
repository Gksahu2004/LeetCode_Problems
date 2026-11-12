class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        int size = words.size();
        for(int i = 0; i<size-1; i++){
            reverse(words[i].begin(), words[i].end());
            for(int j = i+1; j<size; j++){
                if(words[i] == words[j]){
                    count++;
                }
            }
        }

        return count;
    }
};