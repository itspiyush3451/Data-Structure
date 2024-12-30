// Expected pattern :   A
//                      BB
//                      CCC
//                      DDDD
//                      EEEEE


#include<bits/stdc++.h>
using namespace std;

void print16(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<=i;j++){
            cout<<<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    print16(x);
}
