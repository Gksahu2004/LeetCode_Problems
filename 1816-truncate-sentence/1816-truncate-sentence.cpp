class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> vec;

        stringstream ss(s);
        string word;

        while(getline(ss, word, ' ')){
            vec.push_back(word);
        }

        string str = "";
        int i;
        for(i = 0; i<k-1; i++){
            str += (vec[i] + " ");
        }
        str += vec[i];

        return str;

    }
};