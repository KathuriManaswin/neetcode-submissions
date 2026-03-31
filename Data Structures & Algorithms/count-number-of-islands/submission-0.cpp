class Solution {
 int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
public:
    int numIslands(vector<vector<char>>& grid) {
        int islandCount = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    islandCount++;
                    dfs(grid, i, j);
                }
            }
        }
        return islandCount;
    }

    void dfs(vector<vector<char>>& grid, int r, int c){
         if (r < 0 || c < 0 || r >= grid.size() ||
            c >= grid[0].size() || grid[r][c] == '0') {
            return ;
        }

         grid[r][c] = '0';
        for (int i = 0; i < 4; i++) {
            dfs(grid, r + directions[i][0], c + directions[i][1]);
        }
    }
};
