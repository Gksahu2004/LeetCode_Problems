class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> vec = heights;
        sort(vec.begin(), vec.end());

        int count = 0;
        int size = vec.size();
        for(int i = 0; i<size; i++){
            if(vec[i] != heights[i]){
                count ++;
            }
        }

        return count;
    }
};