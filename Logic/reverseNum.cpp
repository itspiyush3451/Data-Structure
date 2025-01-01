// Reverse  a given number :
// example: num:12345 , Reverse:54321


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,rev=0,mod;
    cin>>n;
    while(n>0){
        mod=n%10;
        n=n/10;
        rev=(rev*10)+mod;
    }
    cout<<rev;
}