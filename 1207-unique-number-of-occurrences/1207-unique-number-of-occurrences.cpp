class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;
        unordered_set<int> st;
        int size = arr.size();
        for(int i = 0; i<size; i++){
            mpp[arr[i]]++;
        }
        int count = 0;
        for(auto it : mpp){
            st.insert(it.second);
            count++;
        }

        if(count == st.size()){
            return true;
        }
        return false;
    }
};