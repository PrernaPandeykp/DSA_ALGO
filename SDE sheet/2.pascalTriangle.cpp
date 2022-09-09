#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
 vector<vector<long long int>> ans;
    for(int i=0;i<n;i++){
        vector<long long int>r;
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                r.push_back(1);
            else
                r.push_back(ans[i-1][j-1]+ans[i-1][j]);
            
        }
        ans.push_back(r);
        
    }
    return ans;
}
