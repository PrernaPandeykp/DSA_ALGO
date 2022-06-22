#include <bits/stdc++.h>
using namespace std;

int subset(int ind,int s,int sum,int arr[],int n){
    if(ind==n){
        if(s==sum) return 1;
        
        else return 0;
    }
    s+=arr[ind];

    int s1=subset(ind+1,s,sum,arr,n);

    s-=arr[ind];

    //not pick
    int s2=subset(ind+1,s,sum,arr,n);

    return s1+s2;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >>arr[i];

    int s,sum;
    cin>>sum;

    cout<<subset(0,0,sum,arr,n);

    return 0;
}