#include <bits/stdc++.h>
using namespace std;

int biker_SOl(int n , vector<int>& arr){
  int ans = 0 ;
  int mx = 0 ;
    
    for(int i = 0 ; i < n ; i++ ){
        ans += arr[i];
        mx = max( mx , ans );
        
    }
    return mx ;
    
}

int main() {
	// your code goes here
	int n = 4 ;
    vector<int> arr = { 0,0,0,0,0 } ;
    
    int ans = biker_SOl(n , arr);
    cout<< ans << " ";
    

}
