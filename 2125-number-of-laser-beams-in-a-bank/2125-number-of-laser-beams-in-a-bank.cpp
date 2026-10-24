class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        stack<int> stk;

        int m = bank.size();
        int n = bank[0].size();
        int count;

        int ans = 0;
        for(int i = 0; i<m; i++){
            count = 0;
            for(int j = 0; j<n; j++){
                if(bank[i][j] == '1') count++;
            }
            if(count != 0){
                if(stk.empty()){
                    stk.push(count);
                }
                else{
                    ans += count * stk.top();
                    stk.pop();
                    stk.push(count);
                } 
            }
        }

        return ans;
    }
};