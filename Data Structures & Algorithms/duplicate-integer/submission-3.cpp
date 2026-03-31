class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> findDup;
        for(int i=0; i<nums.size(); i++){
            if(findDup.find(nums[i])==findDup.end()) findDup.insert({nums[i], i});
            else return true;
        }
        return false;
    }
};