class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int start = 0;
        deque<int> maxDeque, minDeque;
        int maxLength = 0;
        for(int end = 0; end < nums.size(); end++){
            //  remove redundant elements from max deque
            while(!maxDeque.empty() && nums[end] > maxDeque.back()){
                maxDeque.pop_back();
            }

            maxDeque.push_back(nums[end]);

            //  remove redundant elements from min deque
            while(!minDeque.empty() && nums[end] < minDeque.back()){
                minDeque.pop_back();
            }

            minDeque.push_back(nums[end]);

            // shrink the window if needed
            while(maxDeque.front() - minDeque.front() > limit){
                if(nums[start] == maxDeque.front()){
                    maxDeque.pop_front();
                }
                if(nums[start] == minDeque.front()){
                    minDeque.pop_front();
                }
                start++;
            }
            maxLength = max(maxLength, end-start+1);
        }
        return maxLength;
    }
};