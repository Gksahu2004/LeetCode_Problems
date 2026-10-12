class Solution {
public:
    int maxFreqSum(string s) {
        int v = 0, c = 0;
        // char vow, cons;
        unordered_map<char, int> vmpp;
        unordered_map<char, int> cmpp;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                vmpp[s[i]]++;
            }
            else{
                cmpp[s[i]]++;
            }
        }

        for(auto it: vmpp){
            if(it.second > v){
                v = it.second;
            }
        }
        for(auto it: cmpp){
            if(it.second > c){
                c = it.second;
            }
        }

        return c+v;
    }
};