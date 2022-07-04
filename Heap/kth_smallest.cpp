#include <iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;

int kthsmallest(vector<int>&arr,int k){
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
    int n,k;
    cin>>n>>k;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    cout<<kthsmallest(arr,k);

}
