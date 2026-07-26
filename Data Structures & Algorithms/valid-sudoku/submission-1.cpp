class Solution {
    bool check(vector<char>& cells){
        vector<bool> seen(10, false);

        for(auto c : cells){
            if(c == '.') continue;

            int num = (c-'0');
            if(seen[num]) return false;

            seen[num] = true;
        }
        return true;
    }

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // row check
        for(int i = 0; i < 9; i++){
            if(!check(board[i])) return false;
        }

        // col check
        for(int col = 0; col < 9; col++){
            vector<char> cells;

            for(int row = 0; row < 9; row++)
                cells.push_back(board[row][col]);
            
            if(!check(cells)) return false;
        }

        // box check
        for (int r = 0; r < 9; r += 3) {
            for (int c = 0; c < 9; c += 3) {

                vector<char> cells;

                for (int i = r; i < r + 3; i++) {
                    for (int j = c; j < c + 3; j++) {
                        cells.push_back(board[i][j]);
                    }
                }

                if (!check(cells))
                    return false;
            }
        }

        return true;
    }
};
