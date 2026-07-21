class Solution {
    int robHelper(vector<int>& nums, int start, int end){
        int n = nums.size();

        if(start == end) return nums[start];
        
        vector<int> dp(n, 0);
        dp[start] = nums[start], dp[start+1] = max(nums[start], nums[start+1]);

        for(int i = start+2; i <= end; i++){
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        }

        return dp[end];
    }

public:

    int rob(vector<int>& nums) {
        // what is dp[i] - max money that can be robbed till the i th house
        // what is the target - dp[n-1]
        // what information do I need to store - curr val, is the first robbed house 0 or 1
        // base case? - dp[0], dp[1]
        // order of iteration - 0 to n-1
        // recurence relation - dp[i] = max(dp[i-1], dp[i-2] + nums[i])

        int n = nums.size();
        if(n == 1) return nums[0];

        int start_with_zero = robHelper(nums, 0, n-2);
        int start_with_one = robHelper(nums, 1, n-1);

        return max(start_with_zero, start_with_one);
    }
};
