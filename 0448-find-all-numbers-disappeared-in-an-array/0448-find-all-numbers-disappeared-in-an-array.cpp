class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        int hash[10000000] = {0};
        vector<int> vec;

        for(int i = 0; i<size; i++){
            hash[nums[i]]++;
        }
        for(int i = 1; i<=size; i++){
            if(hash[i] == 0){
                vec.push_back(i);
            }
        }
        return vec;
    }
};