// Bubble  Sort :- Comparing a index with its adjacent index
// to find out if the prev is bigger than next and if its the case
//  then swap them and bring the biggest number to the last 
//Time complexity : O(n^2) -avg,worst and O(1) for Best case
#include<bits/stdc++.h>
using namespace std;


void BubbleSort(int arr[] , int n){  
        for(int i=n-1;i>=0;i--){
            int isSorted=0;
            for(int j=0;j<=n-1;j++){
                if(arr[j]>arr[j+1]){
                   swap(arr[j],arr[j+1]);
                    isSorted=1;
                }   
                
            }
            if(isSorted==0){
                break;
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
    BubbleSort(arr , n);
    cout<<"Sorted array : "<<endl;
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}