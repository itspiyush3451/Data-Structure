// Expected pattern :  *******
//                      *****
//                       ***
//                        * 




#include<bits/stdc++.h>
using namespace std;

void print8(int n){
    for(int i=0;i<n;i++){
        //for spaces
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //for star
        for(int j=1;j<=2*n-(2*i+1);j++){
            cout<<"*";
        }
        //for spaces
         for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    print8(x);
}