#include <iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;
typedef pair<int, int> pi;

void connectRopes(vector<int>&arr){
    priority_queue <int, vector<int>, greater<int> > pq;
    
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
    }
    int c=0;
    while(pq.size()>1){
        int f=pq.top();
        pq.pop();
        int s=pq.top();
        pq.pop();

        pq.push(f+s);
        c+=f+s;
    }
    cout<<c;
}
int main()
{
    /* code */
    int n,a;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    connectRopes(arr);

}
