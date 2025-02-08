// Shift the zeros to the end of the array 
// Time complexity : O(N) , Space complexity : O(N) for brute force
#include<bits/stdc++.h>
using namespace std;

//Brute force 
// void Shift(vector<int> &arr){
//     int n=arr.size();
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0)
//        temp.push_back(arr[i]);
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }
//     for(int i=temp.size();i<n;i++){
//         arr[i]=0;
//     }     
// }


//optimal solution space cmplexiy(O(1))
void Shift(vector<int> &arr){
      int n=arr.size();
      int j=-1;
      for(int i=0;i<n;i++){
        if(arr[i]==0 && j==-1){
            j=i;
        }
      }
      if(j==-1)return;
      for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
      }
}
int main(){
     int n;
    cout<<"enter the total no of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<"the elements in the array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    Shift(arr);
    cout<<"After shifting the zeros to the end of the array = "<< endl;
        for(int i=0;i<n;i++){
        cout<<arr[i];
       }
    
}
    