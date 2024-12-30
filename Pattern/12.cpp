// Expected pattern :     
// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321
// 123456654321





#include<bits/stdc++.h>
using namespace std;

void print12(int n){
        for(int i =1 ;i<=n;i++){
            for(int j=1;j<=i;j++){
                    cout<<j;
            }
            for(int j=1;j<=2*n-(2*i+1);j++){
                    cout<<" ";
            }
            for(int j=i;j>=1;j--){
                    cout<<j;
            }
            cout<<endl;
        }
}

int main(){
    int x;
    cin>>x;
    print12(x);
}