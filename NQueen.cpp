#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    for (int i = 0; i < col; i++)
        if (board[row][i]) return false;
    for (int i = 0; i < row; i++)
        if (board[i][col]) return false;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) return false;
    for (int i = row, j = col; i < n && j >= 0; i++, j--)
        if (board[i][j]) return false;
    return true;
}
bool solve(vector<vector<int>>& board, int col, int n) {
    if (col == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (board[i][j] ? "Q " : ". ");
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }
    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;
            if (solve(board, col + 1, n))
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n, 0));
    if (!solve(board, 0, n))
        cout << "No solution exists" << endl;
    return 0;
}