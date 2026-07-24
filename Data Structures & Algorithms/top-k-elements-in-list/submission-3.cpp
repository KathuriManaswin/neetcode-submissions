class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(auto num : nums){
            freq[num]++;
        }

        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;

        // for(auto& entry : freq){
        //     heap.push({entry.second, entry.first});
        //     if(heap.size() > k) heap.pop();
        // }

        // vector<int> res;
        // for(int i = 0; i < k; i++){
        //     res.push_back(heap.top().second);
        //     heap.pop();
        // }

        // return res;

        vector<vector<int>> freqBuckets(nums.size() + 1);
        for(auto& entry : freq){
            freqBuckets[entry.second].push_back(entry.first);
        }

        vector<int> res;
        for(int i = freqBuckets.size() - 1; i > 0; --i){
            for(int n : freqBuckets[i]){
                res.push_back(n);
                if(res.size() == k) return res;
            }
        }
        return res;
    }
};
