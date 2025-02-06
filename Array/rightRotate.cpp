// Right rotate the array by one 
// Time complexity : O(N) , Space complexity : O(N)
#include<bits/stdc++.h>
using namespace std;

void rightRotate(int arr[],int n){
    int temp =arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
}


int main(){
     int n;
    cout<<"enter the total no of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the elements in the array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
   
    rightRotate(arr,n);
    
    cout<<"After Right  rotation = "<< endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}