class Solution {
public:

    string encode(vector<string>& strs) {
        // ___#___ length#word
        string key={};
        for(string str : strs){
            key+=to_string(str.length());
            key+='#';
            key+=str;
        }
        return key;
    }

    vector<string> decode(string s) {
        vector<string> res;
        // go till # and use that as length 
        int i = 0;
        while(i < s.size()){
            //cal length
            int l = 0;
            while(s[i] != '#'){
               l = l * 10 + (s[i] - '0');
               i++;
            }

            // skip #
            i++;

            string word={};
            while(l--){
                word+=s[i++];
            }

            res.push_back(word);
        }
        return res;
    }
};
