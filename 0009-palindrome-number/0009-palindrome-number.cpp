class Solution {
public:
    bool isPalindrome(int x) {

        int num = x;
        // int rev_num;

        if(num > 0){
            string str = to_string(num);
            string rev_str(str.rbegin(), str.rend());
            if(str == rev_str){
                return true;
            }
            else return false;

        }
        else if(num == 0){
            return true;
        }
        else{
            return false;
        }
        
    }
};