#include <bits/stdc++.h>
using namespace std;

bool isSafe(int i, int j, int row, int col, int arr[][3],vector<vector<bool>> &visited) {
    if(((i>= 0 && i< row) && (j>=0 && j<col)) && (visited[i][j] == false) && arr[i][j] == 1) {
        return true;
    } else {
        return false;
    }
}

void solveMaze(int arr[][3],int row, int col, int i, int j,
    vector<vector<bool>> &visited, vector<string> & path,string output ) {
        //base case
        if((i == row -1 && j == col-1)) {
            //path found
            path.push_back(output);
        }

        //down movement
        if(isSafe(i+1,j,row,col,arr,visited)) {
            visited[i+1][j] = true;
            solveMaze(arr,row,col,i+1,j,visited,path,output+'D');
            visited[i+1][j] = false;
        }

        //Left movement
        if(isSafe(i,j-1,row,col,arr,visited)) {
            visited[i][j-1] = true;
            solveMaze(arr,row,col,i,j-1,visited,path,output+'L');
            visited[i][j-1] = false;
        }

        //Right movement
        if(isSafe(i,j+1,row,col,arr,visited)) {
            visited[i][j+1] = true;
            solveMaze(arr,row,col,i,j+1,visited,path,output+'R');
            visited[i][j+1] = false;
        }

        //UP movement
        if(isSafe(i-1,j,row,col,arr,visited)) {
            visited[i-1][j] = true;
            solveMaze(arr,row,col,i-1,j,visited,path,output+'U');
            visited[i-1][j] = false;
        }
    }

int main() {
    int maze[3][3] = { {1,0,0}, {1,1,0}, {1,1,1}};
    int row = 3;
    int col =3;
    vector<vector<bool>> visited(row, vector<bool>(col,0));
    vector<string> path;
    string output = "";

    solveMaze(maze,row,col,0,0,visited,path,output);

    for(auto it: path) {
        cout<<it<< " ";

    }
    cout<<endl;
    return 0;
}
