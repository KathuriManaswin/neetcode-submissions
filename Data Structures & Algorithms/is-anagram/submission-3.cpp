class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int arr[26]={0}, n=s.length();
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0) return false;
        }
        return true;
        
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s==t) return true;
        // return false;

    }
};
