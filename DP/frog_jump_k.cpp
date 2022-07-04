
#include <bits/stdc++.h>
using namespace std;
int frog_jump(int ind,vector<int>&arr,vector<int>&dp){
    
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int r=INT_MAX;

    for(int i=0;i<k;i++){
        int l=dp[ind-i] +abs(arr[ind]-arr[ind-i]);
        if(ind>1)
            r=frog_jump(ind-i,arr,dp)+abs(arr[ind-2]-arr[ind]);
    }
    

    return dp[ind]=min(l,r);

}

int main() {
    int n ;
    cin>>n;
    vector<int> arr;
    vector<int>dp(n,-1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<frog_jump(n-1,arr,dp);
    return 0;
}