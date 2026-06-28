class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool>(n, false));

        vector<pair<int, int>> directions = {{0,1}, {0, -1}, {1, 0}, {-1, 0}};

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;
        minHeap.push({grid[0][0], 0, 0});
        visited[0][0] = true;

        while(!minHeap.empty()){
            auto top = minHeap.top();
            minHeap.pop();

            int r = top[1], c = top[2], val = top[0];

            if(r == n-1 && c == n-1) return val;

            for(auto& dir : directions){
                int nr = r + dir.first;
                int nc = c + dir.second;

                if(nr >= 0 && nr < n && nc >= 0 && nc < n && !visited[nr][nc]){
                    visited[nr][nc] = true;
                    int newCost = max(val, grid[nr][nc]);
                    minHeap.push({newCost, nr, nc});
                }
            }
        }

        return -1;
    }
};
