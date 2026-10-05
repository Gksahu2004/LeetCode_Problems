class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int flag = 0;
        for(int i = 1; i<arr.size(); i++){
            if(flag == 0){
                if(arr[i] > arr[i-1]) continue;
                else if (arr[i] < arr[i-1]) flag = 1;
                else return false;
            }
            else{
                if(arr[i] < arr[i-1]) continue;
                else return false;
            }
        }
        if (flag == 0 || arr[0] > arr[1]) return false;
        return true;
    }
};