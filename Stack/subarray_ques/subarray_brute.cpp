//Time Complexity: 0(n*(2^n))

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subArray(vector<int>&arr, int n)
{
    vector<vector<int>> res;
    for (int i=0; i <n; i++)
    {
        vector<int>v;
        for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++)
                v.push_back(arr[k]);
            res.push_back(v);
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
    vector<vector<int>> ans = subArray(arr, n);
    for (int i = 0; i < ans.size(); i++)
        {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}