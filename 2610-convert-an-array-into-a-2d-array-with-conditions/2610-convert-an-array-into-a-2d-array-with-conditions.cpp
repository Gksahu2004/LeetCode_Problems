class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            mpp[nums[i]]++;
        }

        vector<vector<int>> vec;
        while(1){
            bool flag = false;
            vector<int> temp;
            for(auto& it : mpp){
                if(it.second > 0){
                    temp.push_back(it.first);
                    it.second--;
                    flag = true;
                }
            }
            if(!flag){
                break;
            }
            vec.push_back(temp);
        }

        return vec;
    }
};