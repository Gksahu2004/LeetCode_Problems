class Solution {
public:
    vector<int> sumZero(int n) {

        vector<int> vec;
        int start = -(n/2);
        while(start != 0){
            vec.push_back(start);
            vec.push_back(-(start));
            start++;
        }
        if(n % 2 != 0){
            vec.push_back(0);
        }

        return vec;
    }
};