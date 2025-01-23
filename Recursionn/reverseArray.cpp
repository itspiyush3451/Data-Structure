// Reverse a Array using Recursion : i.e a[5]= [1,3,4,5,6]
// Reverse = [6,5,4,3,1]

#include<bits/stdc++.h>
using namespace std;
void revArray(int i, int arr[] , int n){
        if(i>=n/2) return;
        else{
            swap(arr[i],arr[n-i-1]);
            revArray(i+1,arr,n);
        }
}

int main(){
    int n,i;
    cout<<"Enter the number of elements you want to put in the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    revArray(0,arr,n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}