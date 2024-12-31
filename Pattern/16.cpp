// Expected pattern :   A
//                      BB
//                      CCC
//                      DDDD
//                      EEEEE


#include<bits/stdc++.h>
using namespace std;

void print16(int n){
        
    for(int i=0;i<n;i++){
        char q='A'+i;
        for(char j=0;j<=i;j++){
            cout<<q<<" ";
        }
        cout<<endl;
        
    }
}

int main(){
    int x;
    cin>>x;
    print16(x);
}
