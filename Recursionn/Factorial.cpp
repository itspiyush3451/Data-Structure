// Factorial of a number : 5! = 5*4*3*2*1 i.e 120

#include<bits/stdc++.h>
using namespace std;

int Fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
       return n*Fact(n-1);
        
    }
    
}

int main(){
    int x;
    cout<<"Enter the num:"<<endl;
    cin>>x;
    int res=Fact(x);
    cout<<"Fact = "<<res<<endl;
}