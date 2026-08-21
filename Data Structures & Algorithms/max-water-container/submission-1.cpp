class Solution {
public:
    int maxArea(vector<int>& heights) {
        // move the pointer which has lower value as that is what is limiting our max area
        int left = 0, right = heights.size() - 1;
        int maximum_area  = 0;
        while(left < right){
            int height = min(heights[left], heights[right]);
            int temp = height * (right - left);
            if(heights[left] <= heights[right]) left++;
            else right--;

            maximum_area = max(maximum_area, temp);
        }

        return maximum_area;
    }
};
