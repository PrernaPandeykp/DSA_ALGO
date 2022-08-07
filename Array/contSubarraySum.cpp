 bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()<2) return false;
        map<int,int>m;
        m[0]=-1;
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            s=s%k;
            if(m.find(s)!=m.end()){
                if(i-m[s]>1)
                    return true;
            }
            else
                m[s]=i;
        }
        return false;
    }