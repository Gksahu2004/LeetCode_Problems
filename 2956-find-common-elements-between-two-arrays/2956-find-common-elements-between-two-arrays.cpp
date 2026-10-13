class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        unordered_map<int, int> mpp1;
        unordered_map<int, int> mpp2;

        for(int i = 0; i<nums2.size(); i++){
            mpp2[nums2[i]]++;
        }

        for(int i = 0; i<nums1.size(); i++){
            mpp1[nums1[i]]++;
            
        }
        int count = 0;
        for(auto it : mpp1){
            if(mpp2[it.first] != 0){
                count += it.second;
            }
        }
        vec.push_back(count);

        count = 0;
        for(auto it : mpp2){
            if(mpp1[it.first] != 0){
                count += it.second;
            }
        }
        vec.push_back(count);

        return vec;
    }  
};