// Finging the largest element in the array

#include<bits/stdc++.h>
using namespace std;

int Large(int arr[] ,int n){
        int max =arr[0];
        for(int i =0;i<n;i++){
            if (arr[i]>max){
               max=arr[i];
            }
        }
        return max;
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
    int res = Large(arr,n);
    cout<<"largest element = "<<res <<endl;
}
