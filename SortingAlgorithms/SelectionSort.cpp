// Selections Sort :- Selecting the minimum value and swapping it with the index(starting from index 0 ).
#include<bits/stdc++.h>
using namespace std;


void SelectionSort(int arr[] , int n){
        
       
        for(int i=0;i<=n-2;i++){
            int min=i; 
            
            for(int j=i;j<=n-1;j++){
                if(arr[j]<arr[min]){
                   min=j;
                }
                //Can use this to debug or check the values of arr[min] andarr[j] tthrough the comparison
                // else{
                //     cout<<arr[j]<<" "<<arr[min]<<" ";
                // }
                
            }
             swap(arr[i],arr[min]);
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
    SelectionSort(arr , n);
    cout<<"Sorted array : "<<endl;
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}