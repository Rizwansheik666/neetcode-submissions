class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        vector<int> t(9, -1);
        vector<int> tmph(9, -1);
        vector<int> tmpv(9, -1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.') continue;
                int idx = board[i][j] - '1';
                if (tmph[idx] != -1)
                    return false;
                tmph[idx] = 1;
            }
            tmph = t;
            for (int j = 0; j < n; j++) {
                if (board[j][i] == '.') continue;
                int idx = board[j][i] - '1';
                if (tmpv[idx] != -1)
                    return false;
                tmpv[idx] = 1;
            }
            tmpv = t;
        }
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                vector<int> box(9, -1);
                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {
                        if (board[i][j] == '.') continue;
                        int idx = board[i][j] - '1';
                        if (box[idx] != -1)
                            return false;
                        box[idx] = 1;
                    }
                }
            }
        }
        return true;
    }
};