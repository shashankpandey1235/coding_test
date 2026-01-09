#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	int T ;
	cin >> T;
	while(T--){
	int N ;
	string s ;
	cin>> N >> s ;
		    bool ans = true ;

	for(int i = 0 ; i < N ;){
	    if(s[i] == 'W'){
	        i++;
	        continue;
	    }
	    
	    bool hasR = false ;
	    bool hasB = false ;
	    
	    while ( i < N && s[i] != 'W'){
	        if( s[i] == 'R') hasR = true ;
	        if( s[i] == 'B') hasB = true ;
	        i++;
	        
	    }
	    
	    if(!(hasB && hasR)){
	        ans = false ;
	        break;
	    }
	}
		cout<< ( ans ? "yes\n" : "no\n");

	
	}
	return 0;

}
