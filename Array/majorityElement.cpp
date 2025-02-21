// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.  
// Example:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

int majorityElement(vector<int>& nums) {
    int n=nums.size();
    //better approach
    // map<int,int> mpp;
    // for(int i=0;i<n;i++){
    //     mpp[nums[i]]++;
    // }
    
    // for(auto it :mpp){
    //     if(it.second>n/2){
    //         return it.first;
    //     }
    // }
    // return n;

    //brute force
    // for(int i=0;i<n;i++){
    //     int cnt=0;
    //     for(int j=0;j<n;j++){
    //         if(nums[j]==nums[i]){
    //             cnt++;
    //         }

    //     }
    //     if(cnt>n/2){
    //         return nums[i];
    //     }
    // }
    // return n;

    // moore's voting algorithm(optimal)
    int cnt=0,el,cnt1=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }
        else if (el==nums[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    for(int i=0;i<n;i++){
        if(nums[i]==el){
            cnt++;
        }
    }
    if(cnt>n/2){
        return el;
    }
    return n;
}