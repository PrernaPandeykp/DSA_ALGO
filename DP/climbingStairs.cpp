
#include <bits/stdc++.h>
using namespace std;
int climb1(int n){
    if(n==0) return 1;
    if(n==1) return 1;

    int l=climb1(n-1);
    int r=climb1(n-2);
    return l+r;
}
int climb2(int n,vector<int> &dp){
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];

}
int main() {
    int n ;
    cin>>n;
    vector<int> dp(n+1,1);
    cout<<"1st:"<<climb1(n)<<endl;
    cout<<"2nd:"<<climb2(n,dp);
    return 0;
}