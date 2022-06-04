#include<iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void sortArr012(vector<int> nums) {
    int n=nums.size();
    int low=0,mid=0,high=nums.size()-1;
    while( mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1)
            mid++;
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    printArr(nums,n);
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0 ;i<n ;i++)
    cin >> arr[i];
 
    sortArr012(arr);
 
    return 0;
}