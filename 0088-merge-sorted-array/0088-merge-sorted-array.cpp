class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        if(n == 0) return;
        for(int i = 0; i<m; i++){
            if(nums1[i] <= nums2[0]){
                continue;
            }
            else{
                int j = 0;
                swap(nums1[i], nums2[j]);
                while(j < n-1 && nums2[j] > nums2[j+1]){
                    swap(nums2[j], nums2[j+1]);
                    j++;
                }
            }
        }
        for(int i = m; i<m+n; i++){
            nums1[i] = nums2[i-m];
        }
    }
};