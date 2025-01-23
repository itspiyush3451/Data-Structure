// Check if the given string is palindrome or not
// example: MADAM is palindrome , so return true/1 else return false/0;

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, string &str){
    if(i>=str.size()/2) return true;
    if(str[i]!=str[str.size()-i-1]) return false;
    return isPalindrome(i+1,str);
}

int main(){
    string str;
    cout<<"enter the string: "<<endl;
    cin>>str;
    bool res=isPalindrome(0,str);
    cout<<res<<endl;
}