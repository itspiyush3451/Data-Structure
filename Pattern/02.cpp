// Expected pattern :   *
//                      **
//                      ***
//                      ****


#include<bits/stdc++.h>
using namespace std;

void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    print2(x);
}