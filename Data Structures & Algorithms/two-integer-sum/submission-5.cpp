class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        for(int i = 0 ; i < nums.size() ; i++){
            hashMap[nums[i]] = i;
        }
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            if(hashMap.count(target - nums[i]) && hashMap[target - nums[i]] != i) return {i, hashMap[target - nums[i]]} ;
        }
        return res;
    }
};
