class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n, 0);
        vector<int> rightMax(n, 0);

        int maxSoFar = height[0];
        for(int i = 0; i < n; i++){
            maxSoFar = max(height[i], maxSoFar);
            leftMax[i] = maxSoFar;
        }

        maxSoFar = height[n-1];
        for(int i = n-1; i >= 0; i--){
            maxSoFar = max(height[i], maxSoFar);
            rightMax[i] = maxSoFar;
        }

        int res = 0;
        for(int i = 0; i < n; i++){
            int temp = min(leftMax[i], rightMax[i]);
            temp -= height[i];
            res += temp;
        }

        return res;
    }
};
