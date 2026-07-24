class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;

        for(auto str : strs){
            vector<int> freq(26, 0);
            for(auto c : str){
                freq[c-'a']++;
            }

            string key={};
            for(int i = 0; i < 26; i++){
                char c = 'a' + i;
                key+=c;
                key+='#';
                key += to_string(freq[c-'a']);
            }
            anagrams[key].push_back(str);
        }

        vector<vector<string>> res;
        for(auto pair : anagrams){
            res.push_back(pair.second);
        }

        return res;
    }
};
