// Fibonacci series : 0 1 1 2 3 5 8 13 .....
// example : Fibo(4)=3

#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=1) return n;
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main(){
    int n;
    cout<<"Enter the  value u want to find the fibo series upto"<<endl;
    cin>>n;
    int res =fibo(n);
    cout<<" Result :"<<res<<endl;
}