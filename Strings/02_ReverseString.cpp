#include<bits/stdc++.h>
using namespace std;    

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    int n=s.length();
    cout<<"The length of the string is: "<<n<<endl;
    cout<<"The reverse of the string is: ";
    for(int i=n-1;i>=0;i--){
        cout<<s[i];

    }
}