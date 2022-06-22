#include <bits/stdc++.h>
using namespace std;

void subset(int ind,vector<int>&ans,int arr[],int n){
    if(ind==n){
        for(auto i:ans)
        cout<<i<<" ";
        if(ans.size()==0) cout<<"{}";

        cout<<endl;
        return;
    }
    //pick 
    ans.push_back(arr[ind]);
    subset(ind+1,ans,arr,n);
    ans.pop_back();

    //not pick
    subset(ind+1,ans,arr,n);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >>arr[i];

    vector<int>ans;
    subset(0,ans,arr,n);

    
    return 0;
}