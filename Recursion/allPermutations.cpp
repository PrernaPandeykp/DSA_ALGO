// TC : n!
// SC : n

#include <bits/stdc++.h>
using namespace std;

void permute1(vector<int>&comb,vector<vector<int>> &ans, vector<int>&nums ,vector<int>&freq){
    int n=nums.size();
    if(comb.size()==nums.size()) ans.push_back(comb);

    for(int i=0;i<n;i++){
        if(!freq[i]){
            comb.push_back(nums[i]);
            freq[i]=1;
            permute1(comb,ans,nums,freq);
            freq[i]=0;
            comb.pop_back();
        }
    }
    return ans;
}

void permute2(int ind,vector<vector<int>> &ans, vector<int>&nums){
    int n=nums.size();
    if(ind==nums.size()) ans.push_back(nums);

    for(int i=ind;i<n;i++){
        swap(nums[ind],nums[i]);
        permute2(ind+1,ans,nums);
        swap(nums[ind],nums[i])

    }
}

int main(int n,vector<int> &nums){
    vector<int>comb;
    vector<vector<int>>ans;
    vector<int> freq(n,0);

    permute1(comb,ans,nums,freq);
    permute1(0,ans,nums);
    // print 2d vector 
    return ans;
}