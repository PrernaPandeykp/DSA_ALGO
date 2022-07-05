// Next Largest to Left or Nearest Greater to Left


#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&arr,vector<int>&res){
    stack<pair<int,int>>st;
    vector<int>v(arr.size());
    for(int i=0;i<arr.size();i++){
        if(st.size()==0) v[i]=-1;
        else{
            if(st.top().first >arr[i]) v[i]=st.top().second;
            else{
                while(st.size()>0 && st.top().first <=arr[i])
                    st.pop();
                if(st.size()==0) v[i]=-1;
                else v[i]=st.top().second;
                
            }
        }
        st.push({arr[i],i}); 
    }
    
    for(int i=0;i<arr.size();i++){
        res[i]=i-v[i];
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>res(n);
    solve(arr,res);
    for(int i=0;i<n;i++)
    cout<<res[i]<<" ";
    
    return 0;
}