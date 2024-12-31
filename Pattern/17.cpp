//expected output :   
//      A     
//     ABA    
//    ABCBA   
//   ABCDCBA  
//  ABCDEDCBA 
// ABCDEFEDCBA

#include<bits/stdc++.h>
using namespace std;

void print17(int n){
        for(int i=0;i<n;i++){
            //space
            for(int j=0;j<n-i-1;j++){
                    cout<<" ";
            }
            //alphabet
            char ch='A';
            int breakPoint =(2*i+1)/2;
            for(int j=1;j<=2*i+1;j++){
                    cout<<ch;
                    j<=breakPoint?ch++:ch--;
            }
            //space
            for(int j=0;j<n-i-1;j++){
                    cout<<" ";
            }
            cout<<endl;
        }
}

int main(){
    int x;
    cin>>x;
    print17(x);
}