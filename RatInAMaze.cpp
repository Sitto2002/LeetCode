#include <iostream>
using namespace std;
# define N 4

bool solveMazeUtil (int maze[N][N], int x, int y, int s[N][N]);

// function to print solution matrix sol[N][N]
void printSolution (int sol[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << " " << sol[i][j] <<" ";
        }cout << endl;
    }
}

// function to check if x and y is valid  index for N*N matrix
bool isSafe (int maze[N][N], int x , int y){
    if( x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1){
        return true;
    } else {
        return false;
    }
}

// fucntion to solve Maze 
bool solveMaze (int maze[N][N]){
    int sol[N][N] = { {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0} };

    if (solveMazeUtil(maze,0,0,sol) == false) {
        cout << "solution doesnot exist" <<endl;
        return false;
    }     
    printSolution(sol);
    return true;              
}

// recursive utility function to solve maze problem
bool solveMazeUtil (int maze[N][N], int x , int y , int sol[N][N]){
    //  if x and y is goal then return true
    if(x == N-1 && y == N-1 && maze[x][y] == 1){
        sol[x][y] = 1;
        return true;
    }

    // check if maze[x][y] is valid 
    if (isSafe(maze,x,y) == true){
        // check if current block is already part of solution path
        if (sol[x][y] == 1)
            return false;
        // mark x,y as part of solution path
        sol[x][y] = 1;

        // move forward in x direction 
        if(solveMazeUtil(maze,x+1,y,sol) == true)
            return true;
        // if movig right didn't work then move left
        if (solveMazeUtil(maze,x-1,y,sol) == true)
            return true;    

        // if movig x-direction didn't work then move in y-direction in downwards
        if (solveMazeUtil(maze,x,y+1,sol) == true)
            return true;
        // if movig downwards didn't work then move upwards
        if (solveMazeUtil(maze,x,y-1,sol) == true)
            return true;

        // if none of the above movements work then BACKTRACK and unmark x, y as part of solution path
        sol[x][y] = 0;
        return false;      
        }  
    return false;  
}



int main(){
     int maze[N][N] = { {1,0,0,0},
                        {1,1,0,1},
                        {0,1,0,0},
                        {1,1,1,1} };
     solveMaze(maze);
return 0;
}