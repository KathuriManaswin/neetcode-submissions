class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> seen(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(seen.count(nums[i] - 1)) continue;
            int current = 1;
            int num = nums[i] + 1;
            while(seen.count(num)){
                current += 1;
                num++;
            }

            longest = max(longest, current);
        }

        return longest;
    }
};
