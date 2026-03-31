class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int count[26]={0};
        for(auto num : s1){
            count[num-'a']++;
        }
        string d1=s1;
        string temp;
        for(int i=0;i<s2.size();i++){
            if(count[s2[i]-'a']){
                for(int j=0;j<s1.size();j++){
                    temp.push_back(s2[j+i]);
                }
                sort(d1.begin(), d1.end());
                sort(temp.begin(), temp.end());
                if(d1==temp) return true;
                temp.clear();

            }
        }
        return false;
    }
};
