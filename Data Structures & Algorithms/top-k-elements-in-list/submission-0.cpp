class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> unmap;
        for(const auto& num : nums){
            unmap[num]++;
        }

        vector<pair<int,int>> p;
        for(const auto& ele : unmap){
            p.push_back({ele.second, ele.first});
        }


        sort(p.begin(), p.end());
        vector<int> res;
        for(auto i=p.rbegin();i!=p.rend() && k--;i++){
            res.push_back(i->second);
        }
        return res;
    }
};
