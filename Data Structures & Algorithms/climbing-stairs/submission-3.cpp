class Solution {
public:
    int climbStairs(int n) {
        // what is dp[i] - number of ways to reach i th step
        // how do you reach dp[i] - dp[i-1], dp[i-2]
        // smallest - dp[1]
        // order of iteration - 1 to n
        // recurrence relation - sum of prev 2 states

        // -------RECURSION----------
        // if(n == 1) return 1;
        // if(n == 2) return 2;

        // return climbStairs(n-1) + climbStairs(n-2);
        if(n == 1) return 1;
        if(n == 2) return 2;
        vector<int> dp(n+1, 0);
        dp[1] = 1, dp[2] = 2;
        for(int i = 3; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];

    }
};
