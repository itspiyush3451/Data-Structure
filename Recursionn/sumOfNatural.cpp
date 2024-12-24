#include<iostream>
using namespace std;

// int sumOfNatural(int n){
//     if(n==0){
//         return 0;
//     }
    
//     else{
//         return sumOfNatural(n-1)+n;
//     }
    
// }

// int main(){
//     int x = sumOfNatural(5);
//     cout<<x;
// }


int SumOFNatural(int n){
    return n*(n+1)/2;
}

int main(){
    int n=5;
    int x=SumOFNatural(n);
    cout<<x;
}