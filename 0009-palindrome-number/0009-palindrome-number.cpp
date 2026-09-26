class Solution {
public:
    bool isPalindrome(int x) {

        if(x > 0){
            string str = to_string(x);
            string rev_str(str.rbegin(), str.rend());
            if(str == rev_str){
                return true;
            }
            else return false;

        }
        else if(x == 0){
            return true;
        }
        else{
            return false;
        }
        
    }
};