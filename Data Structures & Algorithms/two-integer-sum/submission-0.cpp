class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> unmap;
        int n=nums.size();
        for(int i=0;i<n;i++){
            auto it = unmap.find(target-nums[i]);
            if(it!=unmap.end()){
                return {it->second, i};
            }
        
            unmap.insert({nums[i],i});
        }
        return {-1,-1};
    }
};
