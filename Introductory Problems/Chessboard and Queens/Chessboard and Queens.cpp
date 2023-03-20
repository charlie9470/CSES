#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
    void Recur(int row,int col,int n,vector<vector<int>>& board,int& ans){
        if(board[row][col]>0) return;
        // cout << "(" << row << ", " << col << ")" << endl;
        if(row==n-1){ans++;return;}
        board[row][col]++;
        for(int r = row;r<n;r++){
            board[r][col]++;
        }
        int i = row;
        int j = col;
        while(i<n&&j<n){
            board[i++][j++]++;
        }
        i = row;
        j = col;
        while(i<n&&j>=0){
            board[i++][j--]++;
        }
        for(int i=0;i<n;i++){
            Recur(row+1,i,n,board,ans);
        }
        board[row][col]--;
        for(int r = row;r<n;r++){
            board[r][col]--;
        }
        i = row;
        j = col;
        while(i<n&&j<n){
            board[i++][j++]--;
        }
        i = row;
        j = col;
        while(i<n&&j>=0){
            board[i++][j--]--;
        }
    }
    int NQueens(vector<vector<int>>& B) {
        int ans = 0;
        for(int col = 0;col<8;col++){
            Recur(0,col,8,B,ans);
        }
        return ans;
    }
    int main(){
    vector<vector<int>> board(8,vector<int>(8));
    char tmp;
    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            cin >>tmp;
            if(tmp=='.') board[i][j] = 0;
            else board[i][j] = 1;
        }
    }
    cout << NQueens(board) << endl;
    return 0;
}
