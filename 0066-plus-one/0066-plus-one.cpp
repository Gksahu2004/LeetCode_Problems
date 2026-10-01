class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        vector <int> ans;
        
        int prevCarry, carry, sum;
        carry = 1;

        for(int i = size-1; i>=0; i--){
            prevCarry = carry;
            carry = (digits[i] + prevCarry) / 10;
            sum = (digits[i] + prevCarry) % 10;

            ans.insert(ans.begin(), sum);
            if(i == 0 && carry == 1){
                ans.insert(ans.begin(), 1);
            }
        }
        return ans;
    }
};