//find the missing value from the array :
// example , consider the array = [1,2,4,5,6] find the missing value i.e 3 and return it .

#include<bits/stdc++.h>
using namespace std;

int missingValue(vector<int> &nums){
    int n=nums.size();

    //Brute force(using two loops)
    // for(int i=1;i<=n;i++){
    //     // cout<<"i = "<<i<<endl;
    //     int isPresent=0;
    //     for(int j=0;j<n;j++){
    //         if(nums[j]==i){
    //             isPresent =1;
    //             break;
    //         }

    //     }
    //     if(isPresent==0){
    //         return i;
    //     }
    // }
    // return n;


    //Better solution (using hash);
    //  int  hash[n+1] ={0};
    //  for(int i=0;i<n;i++){
    //     hash[nums[i]]=1;
    //  }
    //  for(int i=1;i<=n;i++){
    //    // cout<<"value : " <<hash[nums[i]]<<endl;
    //     if(hash[i]==0){
    //         return i;
    //     }
        
    //  }
    //  return n;


     //optimal solution
    //  int sum=0,sum2=0;
    //  for(int i=0;i<n;i++){
    //         sum+=nums[i];
    //         cout<<" sum= "<<sum<<endl;
            
    //  }
    //  for(int i=1;i<=n;i++){
    //     sum2+=i;
    //     cout<<" sum2= "<<sum2<<endl;
    //  }
    //  return sum2-sum;

     //solution using XOR(optimal)
     int xor1=0;
     for(int i=1;i<=n;i++){
        xor1=xor1^i;
     }
     int xor2=0;
     for(int i=0;i<n;i++){
        xor2=xor2^nums[i];
     }
     return xor1^xor2;


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

    int res = missingValue(nums);
    cout << "The missing value is: " << res << endl;

    
}