// Left rotate the array by one 
// Time complexity : O(N) , Space complexity : O(N)
#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[] , int n){
        int temp =arr[0];
        for(int i =1;i<n-1;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
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
    leftRotate(arr,n);
    cout<<"After one left rotation = "<< endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}