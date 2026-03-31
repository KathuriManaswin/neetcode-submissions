class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=0;i<32;i++){
            int curr_bit=(n>>i) & 1;
            if(curr_bit==1) count++;
        }
        return count;
    }
};
