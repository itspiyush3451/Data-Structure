// Expected pattern :   1
//                      22
//                      333
//                      4444
//                      55555

#include<bits/stdc++.h>
using namespace std;

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i ;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    print4(x);
}