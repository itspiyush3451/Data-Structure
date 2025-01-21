//Euclidean algorithm : GCD(a,b) = Gcd(a-b,b)  if a>b .
// if we run it untill one of them is zero i.e the greater number , 
// the other remaining number wil be the gcd of both the number
//example : (10,5)=(10-5,5)

#include<bits/stdc++.h>
using namespace std;

void GCD(int x , int y){
        while(x>0 && y>0){
            if(x>y){
                x=x%y;
            }
            else y=y%x;
        }
        if(x==0) cout<<y ;
        else cout<<x;
}


}
int main(){
    int x,y;
    cout<<"Enter x  :"<<endl;
    cin>>x;
    cout<<"Enter y  :"<<endl;
    cin>>y;
    GCD(x,y);
}