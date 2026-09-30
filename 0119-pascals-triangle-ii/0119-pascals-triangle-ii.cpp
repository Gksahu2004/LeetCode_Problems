class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vec;
        long value = 1;
        vec.push_back(value);
        for(int i = 1; i<=rowIndex; i++){
            value = value * (rowIndex - i + 1);
            value = value / i;
            vec.push_back(value);
        }
        return vec;
    }
};