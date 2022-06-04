#include<iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[0];
        
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        while(slow!=fast);
        
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0 ;i<n ;i++)
    cin >> arr[i];

    cout<<findDuplicate(arr);
}