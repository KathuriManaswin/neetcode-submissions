class Solution {
public:
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        priority_queue<long long> heap;
        int n1 = nums1.size();
        int n2 = nums2.size();
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < n2; j++){
                long long int temp = nums1[i] * nums2[j];
                heap.push(temp);
                if(heap.size() > k){
                    heap.pop();
                }
            }
        }

        return heap.top();
    }
};