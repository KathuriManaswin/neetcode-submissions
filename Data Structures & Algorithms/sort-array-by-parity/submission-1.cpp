class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start = 0, last = nums.size() - 1;
        while(start < last){
            if((nums[start] & 1) == 0) start++;
            if(nums[start] & 1){
                swap(nums[start], nums[last]);
                last--;
            }
        }
        return nums;
    }
};