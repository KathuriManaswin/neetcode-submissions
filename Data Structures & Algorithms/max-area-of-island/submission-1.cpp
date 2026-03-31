class Solution {
    int moveDirections[4][2] = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        for(int i=0; i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) {
                    int islandArea = 0;
                    bfs(grid, i, j, islandArea);
                    maxArea = max(maxArea, islandArea);
                }
            }
        }

        return maxArea;
    }

    void bfs(vector<vector<int>>& grid, int r, int c, int& area){
        queue<pair<int,int>> q;
        q.push({r,c});
        grid[r][c]=0;

        while(!q.empty()){
            auto node = q.front();
            q.pop();
            area++;

            for(int i=0;i<4;i++){
                int neighbour_r = node.first + moveDirections[i][0];
                int neighbour_c = node.second + moveDirections[i][1];

                if(neighbour_r >= 0 && neighbour_r < grid.size() && neighbour_c >= 0 && neighbour_c < grid[0].size() && grid[neighbour_r][neighbour_c]==1){
                    grid[neighbour_r][neighbour_c]=0;
                    q.push({neighbour_r, neighbour_c});

                }
            }
        }
    }
};