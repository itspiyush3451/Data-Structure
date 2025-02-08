//  rotate the array k times 
// Time complexity : O(N+k) , Space complexity : O(N)
#include<bits/stdc++.h>
using namespace std;


//Brute force
void kleftRotate(int arr[] , int n , int k){
        k=k%n;
        int temp[k];
         for(int i=0;i<k;i++){
            temp[i] = arr[i];
         }

        for(int i =k;i<n;i++){
            arr[i-k]=arr[i];
        }
         
         for(int i=n-k;i<n;i++){
            arr[i]=temp[i-(n-k)];
         }
}

//Optimal solution (Time complexity : O(N) , space complexity :O(1)-->no extra space)

// void kleftRotate(int arr[] , int n , int k){
// reverse(arr,arr+k);
// reverse(arr+k,arr+n);
// reverse(arr,arr+n);
// }


//Brute force
// void kRightRotate(int arr[],int n,int k){
//     vector<int> temp(k);
//     k=k%n ;
//     for(int i=0;i<k;i++){
//         temp[i] = arr[n-k+i];
//     }
//     for(int i=n-1;i>=k;i--){
//         arr[i]=arr[i-k];
//     }
//     for(int i=0;i<k;i++){
//         arr[i]=temp[i];
//     }
// }

//Optimal solution (Time complexity : O(N) , space complexity :O(1)-->no extra space)

void kRightRotate(int arr[] , int n , int k){
     k=k%n;
reverse(arr,arr+(n-k));
reverse(arr+(n-k),arr+n);
reverse(arr,arr+n);
}

int main(){
     int n,k;
    cout<<"enter the total no of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k: "<<endl;
    cin>>k;
    cout<<"the elements in the array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    // kleftRotate(arr,n,k);
    kRightRotate(arr,n,k);
    cout<<"After k times,  left/Right rotation = "<< endl;
        for(int i=0;i<n;i++){
        cout<<arr[i];
       }
    
}
    