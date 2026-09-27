#include<bits/stdc++.h>
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();

        vector <int> ans(2*size);

        for(int i = 0;i<size; i++){
            int num = nums[i];
            ans[i] = num;
            ans[i+size] = num;
        }

        return ans;
    }
};