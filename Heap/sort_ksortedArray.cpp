#include <iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;

void sortKSortedArr(vector<int>&arr,int k){
    priority_queue <int,vector<int>,greater<int>> pq;
    vector<int>res;
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
        if(pq.size()>k) {
        cout<<pq.top()<<" ";
        pq.pop();
        }
    }
    while(!pq.empty()){
        cout<<pq.top();
        pq.pop();
    }
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
    
    sortKSortedArr(arr,k);

}
