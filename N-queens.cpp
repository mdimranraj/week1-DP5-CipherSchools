#include<iostream>
#include<vector>
using namespace std;

bool board[N][N];

bool isSafe(int row, int col){
    for(int i=0; i<col; i++){
        if(board[row][i])
            return false;
    }
    for(int i=row, j=col; i>=0 && j>=0; i--,j--){
        if(board[i][j])
            return false;
    }
    for(int i=row, j=col; j>=0 && i<col; i++,j--){
        if(board[i][j])
            return false;
    }
    return true;
}

bool solveRec(int col){
    if(col == N) return true;
    for(int i=0; i<N; i++){
        if(isSafe(i, col)){
            board[i][col] = 1;
            if(solveRec(col + 1))
                return true;
            board[i][col] = 0;    
        }
    }
    return false;
}

bool solve(){
    if(solveRec(0) == false)
        return false;
    else{
        printMatrix(board);
        return true;
    }    
}