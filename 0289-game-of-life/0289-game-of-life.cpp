class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();

        int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

        // Encoding: according to the provided problem
        // 0 = dead -> dead
        // 1 = live -> live
        // 2 = live -> dead
        // 3 = dead -> live

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int live = 0;

                for (int k = 0; k < 8; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (x >= 0 && x < m && y >= 0 && y < n) {
                        // 1 and 2 were originally alive
                        if (board[x][y] == 1 || board[x][y] == 2)
                            live++;
                    }
                }

                if (board[i][j] == 1) {
                    if (live < 2 || live > 3)
                        board[i][j] = 2; // live -> dead
                }
                else {
                    if (live == 3)
                        board[i][j] = 3; // dead -> live
                }
            }
        }

        // Convert encoded states to final states
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 2)
                    board[i][j] = 0;
                else if (board[i][j] == 3)
                    board[i][j] = 1;
            }
        }
    }
};