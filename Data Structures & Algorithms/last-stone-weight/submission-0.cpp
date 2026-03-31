class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto num : stones){
            pq.push(num);
        }

        while(pq.size()>1){
            int x1=pq.top();
            pq.pop();
            int x2=pq.top();
            pq.pop();
            if( (x1-x2)>0) pq.push((x1-x2));
            
        }

        if(pq.size()) return pq.top();
        return 0;
    }
};
