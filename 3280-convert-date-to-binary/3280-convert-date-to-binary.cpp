class Solution {
public:
    string binaryConv(int n){
        string s = "";

        while(n > 0){
            s += ('0' + (n % 2));
            n /= 2;
        }

        reverse(s.begin(), s.end());

        return s;
    }
    string convertDateToBinary(string date) {
        string ans;
        for(int i = 0; i<date.size(); i++){
            string s = "";
            while(date[i] != '-' && i < date.size()){
                s += date[i];
                i++;
            }

            int num = stoi(s);

            ans += binaryConv(num);
            if(i < date.length()){
                ans += "-";
            }
        }

        return ans;
    }
};