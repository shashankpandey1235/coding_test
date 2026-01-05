#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int m , n ;

bool dfs(vector<vector<char>> board , string word , int i , int j , int indx ){
    if( indx == word.size()){
        return true ;
    }
    
    if( i < 0 || i >= m || j >= m || j < 0 || board[i][j] != word[indx]){
        return false ;
    }
    
    
    char temp = board[i][j];
    board[i][j] = '#';
    
    bool found = dfs(board , word , i+1 , j , indx+1)|| dfs(board , word , i-1 , j , indx+1) || dfs(board , word , i , j+1 , indx+1) || dfs(board , word , i , j -1 , indx+1);
    board[i][j] = temp ;
    return found ;
    
}

    bool exist(vector<vector<char>>& board, string word) {
         m = board.size();
         n = board[0].size();
        int indx = 0 ;
        for( int i = 0 ; i < m ; i++ ){
            for( int j = 0 ; j < n ; j++ ){
            if (dfs( board , word , i , j , indx )) {
                return true ;
            }
            }
        }
        return false ;
        
    }
};

int main() {
 int m, n;
    cin >> m >> n;

    vector<vector<char>> board(m, vector<char>(n));
 
    board = {
        {'A','B','C' ,'E'},
        {'S','F','C','S'},
        {'A','D','E','E'},
    };
    string word = "ABCCEDB";

    Solution sol;
    if (sol.exist(board, word))
        cout << "true";
    else
        cout << "false";

    return 0;
}

