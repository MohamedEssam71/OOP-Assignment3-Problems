#include<bits/stdc++.h>
using namespace std;


#define N 9
vector<string> allPossibleSol;
string path;
bool vis[N][N];

/* A utility function to check if x,y is valid index for N*N maze */
bool isSafe(int maze[N][N], int x, int y)
{
    // if (x,y outside maze) return false
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && !vis[x][y])
        return true;

    return false;
}

/* A recursive utility function to solve Maze problem */
void solveMazeUtil(int maze[N][N], int x, int y, string& solution)
{
    if(x == N-1 && y == N-1)
    {
        allPossibleSol.push_back(solution);
        return;
    }

    vis[x][y] = true;

    if(isSafe(maze, x+1, y)) {
        solution.push_back('D');
        solveMazeUtil(maze, x+1, y, solution);
        solution.pop_back();
    }
    if(isSafe(maze, x, y+1)) {
        solution.push_back('R');
        solveMazeUtil(maze, x, y+1, solution);
        solution.pop_back();
    }

    if(isSafe(maze, x-1, y)) {
        solution.push_back('U');
        solveMazeUtil(maze, x-1, y, solution);
        solution.pop_back();
    }
    if(isSafe(maze, x, y-1)) {
        solution.push_back('L');
        solveMazeUtil(maze, x, y-1, solution);
        solution.pop_back();
    }

        vis[x][y] = false;
    }

int sol[N][N];
void printMazeSol(const string& mazeSol){
    memset(sol, 0, sizeof(sol));

    int x = 0, y = 0;
    sol[x][y] = 1;
    for(char i : mazeSol){
        switch(i){
            case 'D':
                sol[++x][y] = 1;
                break;
            case 'U':
                sol[--x][y] = 1;
                break;
            case 'L':
                sol[x][--y] = 1;
                break;
            case 'R':
                sol[x][++y] = 1;
                break;
        }
    }
    for(auto& i : sol){
        for(auto& j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void solveMaze(int maze[N][N]){

    memset(vis, false, sizeof(vis));
    solveMazeUtil(maze,0,0,path);
    cout << "-----------------All Possible Solutions----------------" << endl;
    for(const auto& val : allPossibleSol) {
        printMazeSol(val);
    }
}



void shortestPath(){
    string shortPath = allPossibleSol[0] ;
    for(int i = 0; i < allPossibleSol.size()-1; ++i){
        if(allPossibleSol[i].size() <= shortPath.size()){
            shortPath = allPossibleSol[i];
        }
    }
    cout << "-----------------SHORTEST PATH---------------" << endl;
    printMazeSol(shortPath);

}

// driver program to test above function
int main()
{
    int maze[N][N]  =  {
            {1, 0, 0, 1, 1, 1, 1, 1, 1},
            {1, 0, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 0, 0, 1, 0, 0, 1},
            {0, 1, 1, 1, 0, 0, 0, 0, 1},
            {1, 1, 0, 1, 1, 0, 0, 0, 0},
            {1, 0, 0, 1, 1, 1, 1, 1, 0},
            {1, 1, 0, 1, 0, 1, 0, 0, 1},
            {1, 1, 0, 1, 0, 1, 1, 1, 1},
            {0, 0, 0, 1, 0, 1, 0, 0, 1}
    };
    solveMaze(maze);
    shortestPath();

    return 0;
}
