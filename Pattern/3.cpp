// Expected pattern :   1
//                      12
//                      123
//                      1234
//                      12345


#include<bits/stdc++.h>
using namespace std;

void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    print3(x);
}
