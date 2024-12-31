// Expected pattern :   E
//                      DE
//                      CDE
//                      BCDE
//                      ABCDE


#include<bits/stdc++.h>
using namespace std;

void print18(int n){
    for(int i=0;i<n;i++){
        for(char j='E'-i;j<='E';j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    print18(x);
}
