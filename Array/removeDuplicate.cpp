// remove duplicate elements and return the count of unique elements in a sorted array 
#include<bits/stdc++.h>
using namespace std;



// int rmDuplicate(int arr[] ,int n){
//         set<int> st;
//         for(int i=0;i<n;i++){
//             st.insert(arr[i]);
//         }
//         int index=0;
//         for( auto it : st){
//             arr[index] =it;
//             index++;
//         }
//         return index;
// }

//optimal solution

int rmDuplicate(int arr[] ,int n){
    int cnt=0;
       int i=0;
            for(int j=1 ;j<n;j++){
                if(arr[j]!=arr[i]){
                    arr[i+1]=arr[j];
                    i++;
                }
            }
       
        return i+1;
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
    int cnt = rmDuplicate(arr,n);
    cout<<"total count : "<<cnt<<endl;
    
}
