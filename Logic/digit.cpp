// Extraction of digits from a given number :
// example: num:12345 , digits: 5,4,3,2,1


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,lastDigit;
    cin>>n;
    while(n>0){
        lastDigit=n%10;
        cout<<lastDigit<<",";
        n=n/10;
    }
}