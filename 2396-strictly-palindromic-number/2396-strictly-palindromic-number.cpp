class Solution {
public:
    string anybase(int n, int i){
        string revstr = "";
        while(n > 0){
            revstr += (n % i);
            n /= i;
        }
        return revstr;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i = 2; i<=n-2; i++){
            string s = anybase(n, i);
            string revstr = s;
            reverse(s.begin(), s.end());
            if(s != revstr) return false;
        }

        return true;
    }
};