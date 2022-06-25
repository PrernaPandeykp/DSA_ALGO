//TC : 2^N * K
// SC : K * x


class Solution {
    void combination(int ind,int target,vector<int>&comb,vector<vector<int>>&ans,vector<int>&arr){
    if(target==0){
        ans.push_back(comb);
        return;
    }
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1])continue;
        if(arr[i]>target) break;

        comb.push_back(arr[i]);
        combination(i+1,target-arr[i],comb,ans,arr);
        comb.pop_back();
    }
}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>comb;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        combination(0,target,comb,ans,candidates);

        return ans;
    }
};