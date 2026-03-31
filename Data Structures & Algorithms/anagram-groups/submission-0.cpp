class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> unmap;
        string temp;
       
        int arr[26]={0};
        for(const auto &str : strs){
             temp="";
            for(const auto & ch : str){
                arr[ch-'a']++;
            }

            for(int i=0;i<26;i++){
                temp+=  '#' + to_string(arr[i]);
                arr[i]=0;
            }

            unmap[temp].push_back(str);
        }

        vector<vector<string>> res;
        for(const auto &it : unmap){
            res.push_back(it.second);
        }

        return res;
    }
};
