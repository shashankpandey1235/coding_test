#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
     int n = grid.size();
     int total = n * n ;
     
     vector<int> freq(total + 1 , 0 );  // 
     
     for( int i = 0 ; i < n ; i++ ){
         for( int j = 0 ; j < n ; j++ ){
             freq[grid[i][j]]++;
         }
     }
     int repeated = -1 , missing = -1 ;
     
     for( int i = 1 ; i <= total ; i++ ){
         if( freq[i] == 2){
             repeated = i ;
         }if( freq[i] == 0 ) {
             missing = i ;
         }
     }
     return {repeated , missing } ;
     
    }
};

int main() {
    Solution sol;

    vector<vector<int>> grid = {{ 9,1,7},{8,9,2},{3,4,6}};
    vector<int> result = sol.findMissingAndRepeatedValues(grid);

    cout << "Repeating: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;

    return 0;
}
