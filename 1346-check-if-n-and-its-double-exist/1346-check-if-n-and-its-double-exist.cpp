class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // sort(arr.begin(), arr.end());
        // map<double, int> mpp;

        // int i = arr.size() - 1;
        // int j = 0;
        // while(i>=0 && arr[i] >= 0){
        //     if(mpp[double(arr[i])] != 0){
        //         return true;
        //     }
        //     mpp[double(arr[i])/2]++;
        //     i--;
        // }

        // while(j <= i){
        //     if(mpp[double(arr[j])] != 0){
        //         return true;
        //     }
        //     mpp[double(arr[j])/2]++;
        //     j++;
        // }

        // return false;

        unordered_set <int> st;
        int count=0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]==0){
                count++;
            }
            else st.insert(arr[i]);
        }
        if(count>1) return true;
        for(auto it: st){
            if(it%2==0 && st.find(it/2 + it%2) != st.end()){
                return true;
            }
        }
        return false;
    }
};