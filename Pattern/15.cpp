// Expected pattern :   ABCDE
//                      ABCD
//                      ABC
//                      AB
//                      A


#include<bits/stdc++.h>
using namespace std;

void print15(int n){
    int k=n;
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+(k-1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
        k--;
    }
}

int main(){
    int x;
    cin>>x;
    print15(x);
}
