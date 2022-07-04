#include <iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;
typedef pair<int, int> pi;

void kClosestOrigin(vector<vector<int>>&arr,int k){
    priority_queue<pair<int,pair<int,int>>> pq;
    
    for(auto it:arr){
        int d= it[0]*it[0] +it[1]*it[1];
        pq.push({d,{it[0],it[1]}});
    
        if(pq.size()>k) pq.pop();
    }
    while(!pq.empty()){
        pair<int,int>p=pq.top().second;
        cout<<p.first<<" "<<p.second<<" ";
        // res.push_back({arr[k][0],arr[k][1]});
        pq.pop();
    }
}
int main()
{
    /* code */
    int n,k,a;
    cin>>n;

    vector<vector<int>>arr{{1,-1},{2,2},{5,5},{0,0}};
    // for(int i=0;i<n;i++){
    //     vector<int> v;
    //     for(int j=0;j<2;j++){
    //     cin>>arr[i][j];
    //     v.push_back(arr[i][j]);
    //     }
    //     arr.push_back(v);
    // }
    cin>>k;
    kClosestOrigin(arr,k);

}
