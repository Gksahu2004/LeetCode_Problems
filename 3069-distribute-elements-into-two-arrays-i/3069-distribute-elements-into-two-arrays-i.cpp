class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> vec1;
        vector<int> vec2;

        vec1.push_back(nums[0]);
        vec2.push_back(nums[1]);

        int p = 0, q = 0;

        for(int i = 2; i<nums.size(); i++){
            if(vec1[p] > vec2[q]){
                vec1.push_back(nums[i]);
                p++;
            }
            else{
                vec2.push_back(nums[i]);
                q++;
            }
        }

        for(auto it: vec2){
            vec1.push_back(it);
        }

        return vec1;
    }
};