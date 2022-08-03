int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,len=INT_MAX,s=0;
        while(l<=r && r<nums.size()){
            s+=nums[r];
            r++;
            if(s>=target){
                while(s>=target && l<=r){
                    s-=nums[l];
                    l++;
                }
                len=min(len,r-l+1);
                
            }
        }
        return len>=INT_MAX ?0: len;
    }