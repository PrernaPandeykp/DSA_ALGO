#include <iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;

void kClosest(vector<int>&arr,int k,int key){
    priority_queue <pair<int,int>> pq;
    
    for(int i=0;i<arr.size();i++){
        pq.push({abs(arr[i]-key),arr[i]});
        if(pq.size()>k) {
        pq.pop();
        }
    }
    while(!pq.empty()){
        cout<<pq.top().second<<" ";
        pq.pop();
    }
}
int main()
{
    /* code */
    int n,k,key;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cin>>k,key;
    kClosest(arr,k,key);

}
