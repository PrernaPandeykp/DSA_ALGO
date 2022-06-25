
class Solution {
    void combination(int ind,int target,vector<int>&comb,vector<vector<int>>&ans,vector<int>&arr){
    if(ind==arr.size()){
        if(target==0)
        ans.push_back(comb);

        return;
    }
    if(arr[ind]<=target){
        comb.push_back(arr[ind]);
        combination(ind,target-arr[ind],comb,ans,arr);
        comb.pop_back();
    }
    combination(ind+1,target,comb,ans,arr);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>comb;
        vector<vector<int>>ans;

        combination(0,target,comb,ans,candidates);

        return ans;
    }
};