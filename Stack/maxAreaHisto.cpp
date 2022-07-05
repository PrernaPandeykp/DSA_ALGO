#include<bits/stdc++.h>
using namespace std;

vector<int> nxtSmallerLeft(vector<int>&arr,vector<int>&left){
    stack<pair<int,int>>st;
    int def_ind=-1;

    for(int i=0;i<arr.size();i++){
        if(st.size()==0) left[i]=def_ind;
        
        else{
            if(st.top().first <arr[i]) left[i]=st.top().second;
            else{
                while(st.size()>0 && st.top().first>=arr[i]) st.pop();
                if(st.size()==0) left[i]=def_ind;
                else left[i]=st.top().second;
            }
        }
        st.push({arr[i],i});
    }
    return left;
}
vector<int> nxtSmallerRight(vector<int>&arr,vector<int>&right){
    stack<pair<int,int>>st;
    int def_ind =arr.size();
    for(int i=arr.size()-1;i>=0;i--){
        if(st.size()==0) right[i]=def_ind;
        else{
            if(st.top().first <arr[i]) right[i]=st.top().second;
            else{
                while(st.size()>0 && st.top().first>=arr[i])
                    st.pop();
                if(st.size()==0) right[i]=def_ind;
                else right[i]=st.top().second;
                
            }
        }
        st.push({arr[i],i});
    }
    return right;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>left(n);
    vector<int>right(n);
    nxtSmallerLeft(arr,left);
    nxtSmallerRight(arr,right);

    
    for(int i=0;i<n;i++){
        cout<<arr[i] * (abs(left[i]-right[i])-1)<<" ";
    }
    
    return 0;
}