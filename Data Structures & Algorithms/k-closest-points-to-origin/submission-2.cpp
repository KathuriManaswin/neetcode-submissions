class Solution {

    struct CompareDist{
        bool operator()(const vector<int>& a, const vector<int>& b) const{
            int da=a[0]*a[0] + a[1]*a[1];
            int db= b[0]*b[0] + b[1]*b[1];
            return da>db;
        }
    };
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>, vector<vector<int>>, CompareDist> pq;
        for(auto num : points){
            pq.push(num);
        }
        vector<vector<int>> res;
        while(k-- && !pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};
