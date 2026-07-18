class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start = 0, last = nums.size() - 1;
        while(start < last){
            if(nums[start] % 2 == 0) start++;
            if(nums[start] % 2 == 1){
                int temp = nums[start];
                nums[start] = nums[last];
                nums[last] = temp;
                last--;
            }
        }
        return nums;
    }
};