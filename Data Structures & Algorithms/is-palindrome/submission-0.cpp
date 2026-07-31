class Solution {
public:
    bool isPalindrome(string s) {
        // ideas : two pointers O(n), reverse string and compare (underlying mechanism is two pointers only) O(N)
        // contraint : ignore non-alpha numeric characters
        // contraint : ignore casing
        string rev = "";
        string org = "";
        for(char c : s){
            if(isalnum(c)) rev += tolower(c);
            if(isalnum(c)) org += tolower(c);
        }

        reverse(rev.begin(), rev.end());
        cout << "Original without alnum : " << org << endl;
        cout << "reverse : " << rev << endl;
        return rev == org ;
    }
};
