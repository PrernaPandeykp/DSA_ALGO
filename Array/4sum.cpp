vector<vector<int>> fourSum(vector<int>& nums, int t) {
        int n = nums.size(),frnt,bck;
        long long tmp,s,temp;
        vector<vector<int>>ans;
        if(n<4)return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            tmp = t;
            tmp -= nums[i];
            for(int j=i+1;j<n-2;j++){
                temp = tmp;
                temp -= nums[j];
                frnt = j+1;
                bck = n-1;
                while(frnt<bck){
                    s = nums[frnt]+nums[bck];
                    if(s<temp)frnt++;
                    else if(s>temp)bck--;
                    else{
                        ans.push_back({nums[i],nums[j],nums[frnt],nums[bck]});
                        while(frnt<bck && nums[frnt]==ans.back()[2])frnt++;
                        while(frnt<bck && nums[bck]==ans.back()[3])bck--;
                    }
                }
                while(j<n-2 && nums[j]==nums[j+1])j++;
            }
            while(i<n-3 && nums[i]==nums[i+1])i++;
        }
        return ans;
    }
