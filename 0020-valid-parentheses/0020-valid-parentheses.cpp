#include<bits/stdc++.h>
class Solution {
public:
    bool isValid(string s) {
        vector <int> vec;

        int size = s.size();

        for(int i = 0; i < size; i++){

            if(s[i] == '(') vec.push_back(')');
            else if (s[i] == '{') vec.push_back('}');
            else if (s[i] == '[') vec.push_back(']');
            else{
                if (vec.empty() || vec.back() != s[i]){
                    return false;
                }
                else{
                    vec.pop_back();
                }
            }
        }
        return vec.empty(); 
    }
};