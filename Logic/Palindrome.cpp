//Palindrome of a number: 121 -> yes

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int rev=0,mod,x=n;
    while(n>0){
         mod = n%10;
         n=n/10;
         rev=(rev*10)+mod;

    }
    return rev==x?true:false;
}

int main(){
    int x;
    cin>>x;
    cout<<isPalindrome(x);
}