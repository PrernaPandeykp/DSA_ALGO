
#include <bits/stdc++.h>
using namespace std;

// TC : o(n)
// SC : 2*o(n)
int fibo1(int n,vector<int> &dp){
    if (n<=1) return n;
    
    if(dp[n]!= -1) return dp[n];

    return dp[n]=fibo1(n-1,dp)+fibo1(n-2,dp);
    
}
// TC : o(n)
// SC : o(n)
int fibo2(int n,vector<int> &dp){
    dp[0]=0;
    dp[1]=1;
    
    for(int i=2;i<n+1;i++)
    dp[i]=dp[i-1]+dp[i-2];

    return dp[n];
    
}
// TC : o(n)
// SC : o(1)
int fibo3(int n){
    int prev1=1;
    int prev2=0;
    
    for(int i=2;i<n+1;i++){
        int curr= prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    
    return prev1;
    
}
int main() {
    int n ;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<< "1st:"<<fibo1(n,dp)<<endl;
    cout<< "2nd:"<<fibo2(n,dp)<<endl;
    cout<< "3rd:"<<fibo3(n)<<endl;

    return 0;
}