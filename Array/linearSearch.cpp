// Linear search and return the index of the required target;
//Time complexity : O(n) for worst and average and  best 
#include<bits/stdc++.h>
using namespace std;


int linear(vector<int> &arr , int k){  
        for(int i=0;i<=arr.size()-1;i++){
                if(arr[i]==k){
                    return i;
                }
        }     return -1; 
}


int main(){
    int n,k,i;
    cout<<"Enter the num of elements in an array : " <<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in the array: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target: "<<endl;
    cin>>k;
    int index = linear(arr,k);
    cout<<"the target is at index: "<<index<<endl;
    

}