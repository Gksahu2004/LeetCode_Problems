class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> ans;
        int size = nums.size();
        leftsum.push_back(0);
        int sum = 0;
        for(int i = 1; i<size; i++){
            sum += nums[i-1];
            leftsum.push_back(sum);
        }
        sum += nums[size-1];
        for(int i = 0; i<size-1; i++){
            ans.push_back(abs(sum - leftsum[i+1] - leftsum[i]));
        }
        ans.push_back(leftsum[size-1]);
        
        return ans;
    }
};