#include <iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;

int kthLargest(vector<int>&arr,int k){
    priority_queue <int, vector<int>, greater<int> > pq;
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();

    }
    return pq.top();
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
    
    cout<<kthLargest(arr,k);

}
