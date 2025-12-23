#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    int bestBuy = prices[0];
    int profit = 0 ;
    
    for( int i = 1 ; i < prices.size() ; i++ ){
        if( prices[i] > bestBuy ){
            profit = max( profit , prices[i] - bestBuy );
        }else {
            bestBuy = prices[i];
        }
    }
    return profit ;
        
    }
};

int main(){
    Solution sol ;
    
    vector<int> prices = { 7,6,4,3,1 } ;
    
    
   int profit =  sol.maxProfit(prices);
    cout << profit ;
    
}
