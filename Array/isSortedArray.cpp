// Finging if the array is sorted or not 
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[] ,int n){
        for(int i=0;i<n-1;i++){
            if(arr[i+1]>=arr[i]){
                
            }else return 0;
        } return 1;
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
    bool res = isSorted(arr,n);
    if(res ==1){
        cout<<"sorted"<<endl;
    }else cout<<"Not sorted "<<endl;
}
