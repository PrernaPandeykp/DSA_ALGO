// Nearest Smaller Element or Nearest Smaller to Left

// Next Largest Element or Nearest Greater to right

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&arr,vector<int>&v){
    stack<int>st;
    for(int i=0;i<arr.size();i++){
        if(st.size()==0) v[i]=-1;
        else{
            if(st.top()<arr[i]) v[i]=st.top();
            else{
                while(st.size()>0 && st.top()>=arr[i])
                    st.pop();
                if(st.size()==0) v[i]=-1;
                else v[i]=st.top();
                
            }
        }
        st.push(arr[i]);
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v(n);
    solve(arr,v);
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    
    return 0;
}