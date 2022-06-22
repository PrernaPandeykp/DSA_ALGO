#include <bits/stdc++.h>
using namespace std;

bool subset(int ind,vector<int>&ans,int s,int sum,int arr[],int n){
    if(ind==n){
        if(s==sum){
            for(auto i:ans)
            cout<<i<<" ";
            cout<<endl;

            return true;
        }
        return false;
    }
    //pick 
    ans.push_back(arr[ind]);
    s+=arr[ind];

    if(subset(ind+1,ans,s,sum,arr,n)) return true;

    s-=arr[ind];
    ans.pop_back();

    //not pick
    if(subset(ind+1,ans,s,sum,arr,n)) return true;
    return false;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >>arr[i];

    int s,sum;
    cin>>sum;

    vector<int>ans;
    subset(0,ans,0,sum,arr,n);

    return 0;
}