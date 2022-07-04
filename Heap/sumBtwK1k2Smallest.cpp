#include <iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;
typedef pair<int, int> pi;

int  kthSmallest(vector<int>&arr,int k){
    priority_queue<int>maxh;
    for(int i=0;i<arr.size();i++){
        maxh.push(arr[i]);
        if(maxh.size()>k) maxh.pop();

    }
    return maxh.top();
}
int main()
{
    /* code */
    int n,a,k1,k2;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cin>>k1>>k2;
    
    int ele1=kthSmallest(arr,k1);
    int ele2=kthSmallest(arr,k2);

    int s=0;
    for(auto i :arr){
        if(i>ele1 && i<ele2){
        s+=i;
        }
    }
    cout<<s;
}
