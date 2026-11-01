class Solution {
public:
    double minimumAverage(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       
       int i = 0, j = nums.size()-1;
       
       double smallestAvg = (nums[i]+nums[j])/2.0;
       
       i++;
       j--;
       
       while(i<j){
           double avg = (nums[i]+nums[j])/2.0;
           if(avg < smallestAvg){
               smallestAvg = avg;
           }
           i++;
           j--;
       }
       
       return smallestAvg;
    }
};