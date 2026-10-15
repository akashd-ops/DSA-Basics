#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int> &nums)
{
    int n = nums.size();
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j < n-1 ; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}
int main ()
{
    int n ;
    cin >>n;
    vector<int> nums;
    for(int i = 0 ; i < n ; i++){
        int x ;
        cin >> x;
        nums.push_back(x);
    }
    bubblesort(nums);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<nums[i]<<" ";
    }
}
