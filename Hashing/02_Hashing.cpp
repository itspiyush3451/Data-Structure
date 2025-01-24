// hashing is basically used to  pre store some values annd then fetch them when required 
// num of occurrence of a charaacter in this case
#include<bits/stdc++.h>
using namespace std;

int main(){
     string s;
    cin>>s;
   

//Pre computing the values by storing there count of occurrence in hash
    int hash[26]={0};  // --->we can also use hash[256] which will assign these characters in their respective ascii position 
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;  //----> if we use hash[256] then we dont need to subtract (- 'a' )  we can directly use hash[s[i]]
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cout<<"enter the characters to find out its occurrence"<<endl;
        cin>>c;
        //fetch the pre compute  value
        cout<<"occurrence of "<< c<<" is "<<hash[c-'a']<<endl; //-->no need to use -'a' if we assign hash[256]
    }
}