// expected output for n=6

// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************


#include<bits/stdc++.h>
using namespace std;

void print19(int n){
    int iniS=0;
    for(int i=0;i<n;i++){
        //for stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //for spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //for stars
         for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
    }
      iniS=2*n-2;
    for(int i=1;i<=n;i++){
        //for stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //for spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //for stars
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;
    }
}





int main(){
    int x;
    cin>>x;
    print19(x);
    
}



