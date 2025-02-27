// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// Example :
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int> nums) {
    int  n =nums.size();

    // using bubble sort algorithm
    for(int i = n-1 ;i>=0;i--){
        int issorted =0;
        for(int j=0;j<n-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                issorted=1;
            }
        }
        if(issorted==0){
            break;
        }
    }

    // Dutch National Flag algorithm
    int low=0,mid=0,high=n-1;
    while(mid<=high){
         if(nums[mid]==0){
             swap(nums[low],nums[mid]);
             low++;
             mid++;
         }
         else if(nums[mid]==1){
             mid++;
         }
             else{
             swap(nums[mid],nums[high]);
             high--;
         }
     }
 
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
    sortColors(nums);

    cout << "the colors in the order red, white, and blue." << endl;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    
}
