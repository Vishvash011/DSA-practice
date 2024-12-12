#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int row, int col, vector<vector<int>> &board, int n){
    // check karna chahte hai, kya main current cell par [row, col] par rakh sakta hu ya nahi?


}

void printSolution(vector<vector<int>> &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j] << " ";
        }
        cout<<endl;
    }
}

void solve(vector<vector<int>> &board, int col, int n){
    // base case
    if(col >= n){
        printSolution(board, n);
        return;
    }

    // 1 case needs to be solved, recursion will take care of the rest
    
    for(int row = 0; row < n; row++){
        if(isSafe(row, col, board, n)){
            // place it
            board[row][col] = 1;
            //recursion solution lekar aayega next
            solve(board, col + 1, n);
            //backtracking
            board[row][col] = 0;
        }
    }
}
int main(){
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n,0));
    int col = 0;
    // 0 -> empty cell
    // 1 -> Queen at the cell

    solve(board, col, n);
    return 0;
}