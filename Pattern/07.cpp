// Expected pattern :      *
//                        ***
//                       *****
//                      *******




#include<bits/stdc++.h>
using namespace std;

void print7(int n){
    for(int i=1;i<=n;i++){
        //for spaces
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        //for star
        for(int j=1;j<=2*n-i;j++){
            cout<<"* ";
        }
        //for spaces
         for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    print7(x);
}