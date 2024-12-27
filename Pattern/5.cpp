// Expected pattern :   ****
//                      ***
//                      **
//                      *


#include<bits/stdc++.h>
using namespace std;

void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    print5(x);
}