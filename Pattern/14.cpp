// Expected pattern :   A
//                      AB
//                      ABC
//                      ABCD
//                      ABCDE


#include<bits/stdc++.h>
using namespace std;

void print14(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    print14(x);
}
