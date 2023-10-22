#include <iostream>
using namespace std;
#define N 9

void printSolution(int arr[N][N]){
    for (int i=0; i<N; i++){
         for (int j=0; j<N; j++){
        cout << arr[i][j] << " ";
    }  
     cout << endl;
    }
}

bool isSafe(int grid[N][N] , int row , int col , int num){
   
    // check if we find same number in the row
    for(int i=0;i<=8;i++){
        if(grid[row][i] == num)
        return false;
    }
    // check if we find same number in the column
    for(int i=0;i<=8;i++){
        if(grid[i][col] == num)
        return false;
    }

    // check if we find same number in the 3*3 matrix
    int startRow = row-row%3;
    int startCol = col-col%3;
    for (int i=0; i<3; i++)
         for (int j=0; j<3; j++)
       if(grid[i+startRow][j+startCol] == num)
        return false;
       return true;
}

bool solveSudoku(int grid[N][N], int row , int col){
    
    // check if we have reached 8th row and 9th col ( 0 indexed matrix)
    // we are returning true to avoid further backtracking
    if(row == N-1 && col == N){
        return true;
    }
    // check if column value becomes 9
    // we move to next row and column start from 0
    if(col == N) {
        row++;
        col = 0;
    }

    // check if current position of grid already contains value > 0
    // we iterate for the next column
    if(grid[row][col] > 0){
        return solveSudoku(grid,row,col+1);
    }

    for(int num = 1; num <= N; num++){
        // check if its safe to place 0-9 in given row,col

        if(isSafe(grid,row,col,num)){
            // assigning number in current row,col of grid 
            // and assuming our assigned number in position is correct
            grid[row][col] = num;

         // checking for next possibility with next col
         if(solveSudoku(grid,row,col+1)){
            return true;
         }   
        }
        grid[row][col] = 0;
    }
    return false;
}

int main(){

int grid[N][N] =            { {3,0,6,5,0,8,4,0,0},
                              {5,2,0,0,0,0,0,0,0},
                              {0,8,7,0,0,0,0,3,1},
                              {0,0,3,0,1,0,0,8,0},
                              {9,0,0,8,6,3,0,0,5},
                              {0,5,0,0,9,0,6,0,0},
                              {1,3,0,0,0,0,2,5,0},
                              {0,0,0,0,0,0,0,7,4},
                              {0,0,5,2,0,6,3,0,0}, };

    if(solveSudoku(grid,0,0)){
    printSolution(grid);
    }
    else{
    cout << "no solution exist" << endl;
    }
return 0;
}