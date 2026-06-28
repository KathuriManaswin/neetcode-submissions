class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = nums.size() -1, target = -(nums[i]);
            while(j < k){
                int sum = nums[j] + nums[k];
                if(sum < target) j++;
                else if(sum > target) k--;
                else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++, k--;
                    while(j < k && nums[j] == nums[j-1]) j++; 
                }
            }
        }

        return res;
    }
};
