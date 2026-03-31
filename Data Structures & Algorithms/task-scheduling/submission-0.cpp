class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26,0);
        for(auto num : tasks){
            count[num-'A']++;
        }
        sort(count.begin(), count.end());
        int max_f=count[25];
        int empty=(max_f-1)*n;
        for(int i=24;i>=0;i--){
            empty-=min(max_f-1, count[i]);
        }

        return (max(0, empty) + tasks.size());
    }
};
