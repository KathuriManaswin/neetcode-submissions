class Solution {
public:
    void backtrack(int n, int leftc, int rightc, string curr, vector<string>& res){
       if(leftc==n && rightc==n){
        res.push_back(curr);
        return;
       }

       if(leftc<n){
        backtrack(n,leftc+1,rightc,curr+'(',res);
       }
       if(rightc<leftc){
        backtrack(n,leftc,rightc+1,curr+')',res);
       }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(n,0,0,"",res);
        return res;
    }
};
