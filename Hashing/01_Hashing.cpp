// hashing is basically used to  pre store some values annd then fetch them when required 
// num of occurrence of a integer data in this case
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0 ;i<n;i++){
        cin>>arr[i];
    }

//Pre computing the values by storing there count of occurrence in hash
    int hash[12]={0};
    for(i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cout<<"enter the nums to find out its occurrence"<<endl;
        cin>>num;
        //fetch the pre compute  value
        cout<<"occurrence of "<< num<<" is "<<hash[num]<<endl;
    }
}