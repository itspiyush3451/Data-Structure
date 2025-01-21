//Prime number : only divisible by 1 and itself;
// For example : 3,5,7,11 etc;
#include<bits/stdc++.h>
using namespace std;

//Using brute force O(n)
void Prime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
           cnt++;
        }
    }
    if(cnt==2){
        cout<<"It is a prime number";

    }else cout<<"it is not a prime number";
}

//more optimized time complexity i.e O(sqrt(n))
void Prime1(int n){
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){     //-----> note i<=sqrt(n) or i*i<=n are same
        if(n%i==0){
            cnt++;
           if(n/i!=i){
            cnt++;
           }
        }
    }
        if(cnt==2){
        cout<<"It is a prime number";

         }else cout<<"it is not a prime number";
}

int main(){
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    Prime(x);
    Prime1(x);

   
}