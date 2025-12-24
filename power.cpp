#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    double myPow(double x, int n) {
        if( n < 0 ){
            x = 1 / x ;
            n = -n ;
    }
    
    return power(x,n);
    }
    


private: 
double power(double x , int n ){
    if( n == 0 ){
        return 1 ;
    }
  double a = power( x , n /2 );
  
  if( n % 2 == 0 ){
      return a * a ;
  }else {
      return a * a * x ;
  }
    
    
}
};


int main() {
	
	Solution sol ;
  double 	x = 2.00000;
  int n = 2;
	 
	double ans = sol.myPow(x , n );
    cout<< ans ;
	

}
