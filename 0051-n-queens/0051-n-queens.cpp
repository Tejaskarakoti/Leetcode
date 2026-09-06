class Solution {
public:
    vector<vector<string>> result;
    bool isSafe(int x, int y, vector<string>& matrix, int n){
        for (int i = 0; i < x; i++) {
            if (matrix[i][y] == 'Q') return false;
        }

        for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--){
            if (matrix[i][j] == 'Q') return false;
        }

        for (int i = x - 1, j = y + 1; i >= 0 && j < n; i--, j++){
            if (matrix[i][j] == 'Q') return false;
        }

        return true;
    }

    void find(int n, int x, vector<string>& matrix){
        if (x == n) {
            result.push_back(matrix);
            return;
        }

        for (int y = 0; y < n; y++) {
            if (isSafe(x, y, matrix, n)) {
                matrix[x][y] = 'Q';        
                find(n, x + 1, matrix);    
                matrix[x][y] = '.';      
            }
        }
    }

     vector<vector<string>> solveNQueens(int n) {
        vector<string> matrix(n, string(n, '.'));
        find(n, 0, matrix);
        return result;
    }
};


