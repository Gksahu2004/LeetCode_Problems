class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str = "";
        int size = s.size();
        vector<int> vec(size);
        for(int i = 0; i<size; i++){
            vec[indices[i]] = s[i];
        }

        for(int i = 0; i<size; i++){
            str += vec[i];
        }

        return str;
    }
};