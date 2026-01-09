#include <bits/stdc++.h>
using namespace std;


void find_youngest_member(int n , int m , vector<pair<int , int >> &gifts){
    
    vector<int>in(n+1,0),out(n+1,0);
    
    for( auto &p : gifts){
        out[p.first]++;  // given gifts 1 -> 2
        in[p.second]++;  // received gifts
    }
    
    for( int i = 1 ; i <= n  ; i++ ){
        if(in[i] == n-1 && out[i] == 0 ){
            cout<< i ;
            return;
        }
    }

}

int main() {
	// your code goes here
	int n = 2 ;
	int m = 1 ;
	vector<pair<int,int>> gifts = {{ 1 , 2 }};
	
	find_youngest_member(n , m , gifts );
	
	
	return 0 ;

}
