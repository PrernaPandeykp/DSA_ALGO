#include <bits/stdc++.h>
using namespace std;

void rev1(int l,int r,int arr[]){
    if(l>=r)
    return ;

    swap(arr[l],arr[r]);
    rev1(l+1,r-1,arr);
    
}
void rev2(int i,int arr[],int n){
    
    if(i>=n/2)
    return ;

    swap(arr[i],arr[n-i-1]);
    rev2(i+1,arr,n);
    
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >>arr[i];

    rev1(0,n-1,arr);
    for(int i=0;i<n;i++)
    cout<<arr[i];
    cout<<" ";

    rev2(0,arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i];

    return 0;
}