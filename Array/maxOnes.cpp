// find the maximum num of consecutive ones in an array full of 1 and 0 s 
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
#include<bits/stdc++.h>
using namespace std;

int ones(vector<int> &nums){
        int n=nums.size();
        int cnt=0,maxi =0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
                maxi=max(cnt,maxi);
            }
            else{
                cnt=0;
            }
        }
        return maxi;
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

    int res = ones(nums);
    cout << "The max number of consecutive ones is : " << res << endl;

    
}