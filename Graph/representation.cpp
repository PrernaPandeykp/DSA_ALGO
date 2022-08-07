#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int v,vector<int>adj[]){
    vector<int>bfs, visited(v+1,0);

    for(int i=1;i<v+1;i++){
        if(!visited[i]){
            queue<int>q;
            q.push(i);
            visited[i]=1;

            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);  

                for(auto i: adj[node]){
                    if(!visited[i]){
                        q.push(i);
                        visited[i] =1;
                    }
                }
            }
        }
    }
    return bfs;
    

}
int main(){
    int m,n;
    cin>>m>>n;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

        
    }
    vector<int>res(bfs(m,adj));
    for(auto i: res) cout<<i;
    return 0;
}