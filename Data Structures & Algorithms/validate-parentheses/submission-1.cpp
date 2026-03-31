class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2==1) return false;
        stack<char> l;
        stack<char> r;
        for(auto c : s){
            if(c=='(' || c=='{' || c=='['){
                l.push(c);
            }
            else if((c==')' || c=='}' || c==']') && !l.empty()){
                if((c==')' && l.top()=='(') || (c==']' && l.top()=='[') || (c=='}' && l.top()=='{') ){
                l.pop();
                r.push(c);}
                
            }

            else{
                return false;
            }
        }
        if(l.size()==0 && r.size()==s.length()/2) return true;
        return false;
    }
};
