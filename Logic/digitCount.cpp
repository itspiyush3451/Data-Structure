// Total cound of digits of a given number :
// example: num:12345 , digitCount:15


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,lastDigit,count=0;
    cin>>n;
    cout<<n<<endl;
    while(n>0){
        lastDigit=n%10;
        // cout<<lastDigit<<",";
        count+=lastDigit;
        n=n/10;
    }
    cout<<"Total count : "<<count<<endl;
}