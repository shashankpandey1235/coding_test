#include <bits/stdc++.h>
using namespace std;

int calc_good_sum( int n , vector<long long>arr){
    
    stack<long long> st;
    
    for( int i = 0 ; i < n ; i++ ){
        if(arr[i] > 0 ){
            st.push(arr[i]);
        }else {
            long long need = abs(arr[i]);
            long long removeElement = 0 ;
            
            while(!st.empty() && removeElement < need ){
                removeElement+=st.top();
                st.pop();
            }
            st.push(need);
        }
    }
    
    long long ans = 0 ;
    
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    
    return ans ;
    
}

int main() {
	// your code goes here
	int n = 7 ;
	vector<long long> arr = { 2 , -1 , 3 , 4 , -4 , 2 , 3 } ;
    int ans = calc_good_sum(n , arr);
    cout<< ans ;

}
