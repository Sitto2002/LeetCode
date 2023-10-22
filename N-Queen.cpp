#include <iostream>
using namespace std;
# define N 4

//bool solveMazeUtil (int maze[N][N], int x, int y, int s[N][N]);

// function to print solution matrix board[N][N]
void printSolution (int board[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            if (board[i][j])
            cout << "Q " ;
             else 
                cout << ". ";
                cout << endl;
        }
}

// function to check if x and y is valid  index for N*N matrix
bool isSafe (int board[N][N], int row , int col) {
    int i , j;
    
    // check this row on left side
    for(int i=0;i<col;i++)
    if(board[row][i])
        return false;

    // check upper diagonal on left side
    for(int i=row,j=col; i>=0 && j >= 0; i--,j--)
    if(board[i][j])
        return false;

    // check lower diagonal on left side
    for(int i=row,j=col; i < N && j >= 0; i++,j--)
    if(board[i][j])
        return false; 
return true;
}

bool solveNQUtil (int board[N][N], int col){
    //  if all queens are placed then return true
    if(col >= N )
        return true;

    // consider this column and try to place this queen in all rows one by one
    for (int i=0; i<N ; i++){
        // check if queen can be placed on board [i][col]
    if (isSafe(board,i,col)){
        // place this queen on board[i][col]
        board[i][col] = 1;

        // recurive function to placxe rest of  queens
        if (solveNQUtil(board, col+1))
            return true;
        // if placing queen in board[i][col] doenot lead to any solution, then remove queen from board[i][col]
        board[i][col] = 0;    
}
    }
return false;
}

// recursive function to solve N queens problem using BACKTRACKING
bool solveNQ(){
    int board[N][N] = { {0,0,0,0},
                        {0,0,0,0},
                        {0,0,0,0},
                        {0,0,0,0} };

    if (solveNQUtil(board, 0) == false) {
        cout << "solution doesnot exist" ;
        return false;
    }     
    printSolution(board);
    return true;              
}

int main(){
     solveNQ();
return 0;
}