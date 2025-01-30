// Insertion Sort : Takes an element and place it in its correct position
//Time complexity : O(n^2) for worst and average and O(n) for best 
#include<bits/stdc++.h>
using namespace std;


void InsertionSort(int arr[] , int n){  
        for(int i=0;i<=n-1;i++){
            int j=i;
           // cout<<"j= "<<j;  -->can run this for better understanding
            while(j>0 && arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                j--;
                //cout<<"inner j = "<<j;   -->can run this for better understanding
            }
            
        }
}


int main(){
    int n,i;
    cout<<"Enter the num of elements in an array : " <<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted array : "<<endl;
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    InsertionSort(arr , n);
    cout<<"Sorted array : "<<endl;
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}