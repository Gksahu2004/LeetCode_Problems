#include<bits/stdc++.h>
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> vec;
        map<int, int, greater<int>> mpp;

        for(int i = 0; i<heights.size(); i++){
            mpp[heights[i]] = i;
        }

        for(auto it: mpp){
            vec.push_back(names[it.second]);
        }

        return vec;
    }
};