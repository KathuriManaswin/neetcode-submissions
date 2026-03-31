class Solution {
public:
    string multiply(string num1, string num2) {
       long long int val1 = 0;
        for (char c : num1) {
            val1 = val1 * 10 + (c - '0');
        }

        long long int val2 = 0;
        for (char c : num2) {
            val2 = val2 * 10 + (c - '0');
        }

        long long int res=val1*val2;
    
        string str;
        if(res==0) return "0";
        while(res){
            str.push_back('0' + (res%10));
            res/=10;
        }
        reverse(str.begin(), str.end());
        return str;
    }

};
