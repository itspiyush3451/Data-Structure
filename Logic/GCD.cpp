// Gcd of 9 and 12 :- 1,3,9:1,2,3,4,6,12
// hence, GCD=3
#include<bits/stdc++.h>
using namespace std;

void GCD(int x , int y){
    int gcd=1;
   for(int i=1;i<=min(x,y);i++){  //---->min of x,y will optimize the time complexity from O(n) to O(min(n))
    if(x%i==0 && y%i==0){
        gcd=i;
    }
   }
   cout<<"Gcd of "<<x<<" and "<<y<<" = "<<gcd<<endl;
}

//A more optimal way of finding GCD i.e looping backwards from min(x,y)
//  and breaking out of the loop after the very first common divisor because that will be automatically the greatest 
void GCD1(int x , int y){
    int gcd=1;
   for(int i=min(x,y);i>=1;i--){  //---->min of x,y will optimize the time complexity from O(n) to O(min(n))
    if(x%i==0 && y%i==0){
        gcd=i;
        break;
    }
   }
   cout<<"Gcd of "<<x<<" and "<<y<<" = "<<gcd<<endl;
}
int main(){
    int x,y;
    cout<<"Enter x  :"<<endl;
    cin>>x;
    cout<<"Enter y  :"<<endl;
    cin>>y;
    GCD(x,y);
    GCD1(x,y);
}