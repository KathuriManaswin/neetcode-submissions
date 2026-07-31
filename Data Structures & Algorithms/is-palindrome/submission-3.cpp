class Solution {
public:
    bool isPalindrome(string s) {
        // ideas : two pointers O(n), reverse string and compare (underlying mechanism is two pointers only) O(N)
        // contraint : ignore non-alpha numeric characters
        // contraint : ignore casing
        // string rev = "";
        // string org = "";
        // for(char c : s){
        //     if(isalnum(c)) rev += tolower(c);
        //     if(isalnum(c)) org += tolower(c);
        // }

        // reverse(rev.begin(), rev.end());
        // cout << "Original without alnum : " << org << endl;
        // cout << "reverse : " << rev << endl;
        // return rev == org ;

        int l = 0, r = s.length() -1;
        while(l <= r){
            while(l < r && !isalnum(s[l])) l++;
            while(l < r && !isalnum(s[r])) r--;
            
            s[l] = tolower(s[l]);
            s[r] = tolower(s[r]);
            if(s[l] != s[r]) return false;
            
            l++,r--;
        }

        return true;
    }
};
