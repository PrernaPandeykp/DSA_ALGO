#include <iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;
typedef pair<int, int> pi;

void topKfreqEle(vector<int>&arr,int k){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
    unordered_map<int,int>mp;
    
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto it: mp){
        pq.push({it.second, it.first});
        if(pq.size()>k) pq.pop();
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
    cin>>k;
    topKfreqEle(arr,k);

}
