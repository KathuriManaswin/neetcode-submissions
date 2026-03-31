class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long int val;
        val=digits[0];
        int pointer=1;
        while(pointer<digits.size()){
            val*=10;
            val+=digits[pointer];
            pointer++;
        }
        val++;
        cout<<val;
        vector<int> res;
        while(val){
            res.push_back(val%10);
            val/=10;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
