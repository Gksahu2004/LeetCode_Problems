#include<bits/stdc++.h>
class Solution {
public:
    int mirrorDistance(int n) {
        string str = to_string(n);
        reverse(str.begin(), str.begin() + str.length());
        int num = stoi(str);
        
        return abs(n - num);
    }
};