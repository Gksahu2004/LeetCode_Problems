class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int mincost = nums[0];
        sort(nums.begin(), nums.end());
        if(nums[0] == mincost){
            mincost += nums[1] + nums[2];
        }
        else{
            if(mincost == nums[1]){
                mincost += nums[0] + nums[2];
            }
            else{
                mincost += nums[0] + nums[1];
            }
        }

        return mincost;
    }
};