// Finging the second largest element in the array

#include<bits/stdc++.h>
using namespace std;

int SecLarge(int arr[] ,int n){
       int largest = arr[0];
       int slargest = arr[0];
       for(int i =0;i<n;i++){
        if(arr[i]>largest){
            largest =arr[i];
        }
       }
       for(int i =0;i<n;i++){
            if(arr[i]>slargest &&  arr[i]<largest){
                slargest =arr[i];
            }
       }
       return slargest;

       
}

//optimal solution
// int SecLarge(int arr[] ,int n){
//        int largest = arr[0];
//        int slargest = -1;
//        for(int i =1;i<n;i++){
//         if(arr[i]>largest){
//             slargest =largest;
//             largest =arr[i];
//         }
//         else if(arr[i]<largest && arr[i]>slargest){
//             slargest =arr[i];
//         }
//        }
//         return slargest;
// }



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
    int res = SecLarge(arr,n);
    cout<<" Second largest element = "<<res <<endl;
}
