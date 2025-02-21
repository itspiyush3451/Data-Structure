// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Example:
// Input: nums = [4,1,2,1,2]
// Output: 4   
#include<bits/stdc++.h>
using namespace std;

int once(vector<int> &nums){
       int n=nums.size();
        //brute force
        for(int i=0;i<n;i++){
            int cnt=0;
            int num=nums[i];
            for(int j=0;j<n;j++){
                if(nums[j]==num){
                    cnt++;
                }
            }
            if(cnt==1){
                return num;
            }
        }
        return n;



       //better solution
    //    unordered_map<int,int> mpp;
    //    for(int i=0;i<n;i++){
    //     mpp[nums[i]]++;
    //    }
    //    for(auto it :mpp){
    //    if(it.second==1){
    //     return it.first;
    //    }
    //    }
    //    return n;


       //more better solution
    //    int xor1=nums[0];
    //    for(int i=1;i<n;i++){
    //        xor1^=nums[i];
    //    }
    //    return xor1;
    //    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "The elements in the array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    int res = once(nums);
    cout << "The number repeated  once is : " << res << endl;

    
}