class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string str = "";
        int i = 0;
        int n1 = s.size();
        int n2 = knowledge.size();
        unordered_map<string, string> mpp;
        for(int k = 0; k<n2; k++){
            mpp[knowledge[k][0]] = knowledge[k][1];
        }
        while(i < n1){
            while(i < n1 && s[i] != '('){
                str += s[i];
                i++;
            }
            if(i >= n1) break;
            i++;
            string s2 = "";
            while(s[i] != ')'){
                s2 += s[i];
                i++;
            }
            if(mpp.find(s2) != mpp.end()){
                str += mpp[s2];
            }
            else{
                str += '?';
            }
            i++;
        }

        return str;
    }
};