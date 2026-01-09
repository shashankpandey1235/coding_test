#include <bits/stdc++.h>
using namespace std;

int cal_pairs(int n , vector<int> &arr){
    
    vector<long long> prefixSum(n+1 , 0 );
    
    long long ans = 0 ;
     
    // calculate prefix sum 
    for( int i = 0 ; i < n ; i++ ){
        prefixSum[i+1] = prefixSum[i] + arr[i];
    }
    
    for( int m = 1 ; m <= n ; m++ ){
        unordered_map<long long , int > map ;
        
        for( int l = 0 ; l < m ; l++ ){
            long long sum = prefixSum[m] - prefixSum[l];
            map[sum]++;
        }
        
        for( int r= m+1 ; r<= n ; r++ ){
            long long sum = prefixSum[r] - prefixSum[m];
            if(map.count(sum)){
                ans = ans + map[sum];
            }
        }
    }
    
    return ans ; 
}


int main() {
	// your code goes here
	int n = 3 ;
	vector<int> arr = {1 , 2 , 3 };
	int ans = cal_pairs( n , arr);
	cout << ans ;
	return 0 ;
	
	

}
