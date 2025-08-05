#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> & board, int n) {
    int dupRow = row;
    int dupCol = col;

    //check upper diagonal
    while(row >= 0 && col >=0) {
        if(board[row][col] == 'Q') {
            return false;
        }
        row--;
        col--;
    }

    col = dupCol;
    row = dupRow;
    //check row
    while(col >=0) {
        if(board[row][col] == 'Q') {
            return false;
        }
        col--;
    }

    //check Downward diagonal
        col = dupCol;
        row = dupRow;
    while(row < n && col >=0) {
        if(board[row][col ] == 'Q'){
            return false;
        }
        row++;
        col--;
    }
    return true;
}
void solve(int col, vector<string> & board, vector<vector<string>> & ans,int n){

    if(col == n) {
        ans.push_back(board);
    }

    for(int row = 0; row < n; row++) {
        if(isSafe(row,col,board,n)) {
            board[row][col] = 'Q';
            solve(col+1,board,ans,n);
            board[row][col] = '.';
        }
    }
}
vector<vector<string>> solveNqueen(int n) {
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i = 0; i< n; i++) {
        board[i] = s;
    }

    solve(0,board,ans,n);
    return ans;
}
int main() {
    int n = 4;
    vector<vector<string>> ans;
    ans = solveNqueen(n);

    for(int i = 0; i< n;i++) {
        for(int j = 0; j<n;j++) {
            cout<< ans[i][j]<< endl;
        }
        cout<< endl<<endl;
    }
    return 0;
}
