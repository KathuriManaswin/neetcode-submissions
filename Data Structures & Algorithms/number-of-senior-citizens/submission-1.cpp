class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(auto each : details){
            int age = (*(each.end() - 4) - '0') * 10 + ( *(each.end() - 3) - '0') ;
            if(age>60) count++;
        }

        return count;
    }
};