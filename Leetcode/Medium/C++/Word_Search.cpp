
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || board[0].empty() || word.empty()) {
            return false;
        }
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (search(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }

private:
    bool search(vector<vector<char>>& board, string& word, int i, int j, int matched) {
        if (matched == word.length()) {
            return true;
        }
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[matched]) {
            return false;
        }
        char temp = board[i][j];
        board[i][j] = '#';
        bool result = search(board, word, i - 1, j, matched + 1) ||
                      search(board, word, i, j - 1, matched + 1) ||
                      search(board, word, i + 1, j, matched + 1) ||
                      search(board, word, i, j + 1, matched + 1);
        board[i][j] = temp;
        return result;
    }
};
