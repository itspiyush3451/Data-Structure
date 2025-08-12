#include<bits/stdc++.h>
using namespace std;

int lengthOfStrings(string s){
    int n=0;
    for(int i=0;s[i]!='\0';i++){
        n++;
    }
    return n;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    // int n=s.length();
    int n=lengthOfStrings(s);
    cout<<"The length of the string is: "<<n<<endl;
    return 0;
}