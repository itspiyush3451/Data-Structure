// All the divisor for respective  number
// eg: 12--->1,2,3,4,6,12;
#include<bits/stdc++.h>
using namespace std;

void Divisor(int n){
    //for loop to  loop from 1 to the input number O(n)
    for(int i=1;i<=n;i++){
        //condition to check if the module of n and i is 0 , if it is 0 then print the number i.e 'i'
        if(n%i==0){
            cout<<i<<" ";
        }
      
    } 
      
}

//Using vector for a better time complexity i.e O(sqrt(n))
void Divisor1(int n){
    vector<int> ls;
    //for loop to  loop from 1 to the input number
    for(int i=1;i<=sqrt(n);i++){
        //condition to check if the module of n and i is 0 , if it is 0 then print the number i.e 'i'
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
           
        }
    } 
    sort(ls.begin(),ls.end());
    for(auto it: ls){
        cout<<it<<" ";
    }
}

int main(){
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    Divisor(x);
    Divisor1(x);

}