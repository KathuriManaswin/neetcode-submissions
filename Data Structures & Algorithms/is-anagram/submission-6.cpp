class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s==t;

        unordered_map<char, int> freq;

        for (char c = 'a'; c <= 'z'; c++) {
            freq[c] = 0;
        }

        for(char c : s){
            freq[c]++;
        }
        for(char c : t){
            freq[c]--;
        }

        for(char c = 'a'; c <= 'z'; c++){
            if(freq[c] != 0) return false;
        }   

        return true;
    }
};
