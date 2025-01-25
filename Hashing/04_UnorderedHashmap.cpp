//In average and best cases , unordered map has a time complexity of 1 i.e  O(1)
//In worst case , time complexity is O(n) , worst case happens due to internal collision
//it always store the value in random manner 



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0 ;i<n;i++){
        cin>>arr[i];
    }

    //Pre computing using hashmap
    unordered_map<int,int> mpp;
    for(i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    //iterating through the map
    for(auto it: mpp){
        cout<<it.first<<" --> "<<it.second<<endl;
    }




    int q;
    cin>>q;
    while(q--){
        int num;
        cout<<"enter the nums to find out its occurrence"<<endl;
        cin>>num;
        //fetch the pre compute  value
        cout<<"occurrence of "<< num<<" is "<<mpp[num]<<endl;
    }
}