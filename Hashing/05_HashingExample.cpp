/**Counting frequencies in the given array elements 
Example:-
Input: arr[] = [2, 3, 2, 3, 5]
Output: [0, 2, 2, 0, 1]
Explanation: We have: 1 occurring 0 times, 2 occurring 2 times, 3 occurring 2 times, 4 occurring 0 times, and 5 occurring 1 time.*/

#include<bits/stdc++.h>
using namespace std;



vector<int> Freq(vector<int> &arr){
            int n=arr.size(); // No need to make a variable for size , you can directly loop through arr.size()
            unordered_map<int,int> mpp;
            vector<int> temp;

            //Pre-computing
            for(int i=0;i<n;i++){
                mpp[arr[i]]++;
            }

            for(int i=0;i<n;i++){
                //checking if mpp[i+1] key exists in that position  , if it exists then push_back its count in the temp vector 
                //and if not the push_back 0 in the temp vector
                if(!mpp.count(i+1)) temp.push_back(0);
                else  temp.push_back(mpp[i+1]);

                // temp[i]=mpp[i+1];  -->u can directly assign the value but it will through segmentation error , if you exceed the key 
            }
            return temp;
}
int main() {
    int n;
    cout << "Enter the number of elements to be stored in the array: " << endl;
    cin >> n;
    
    vector<int> arr(n); // Resize arr to hold n elements
    cout << "Enter " << n << " elements: " << endl;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Read input into arr
    }
    for(int i = 0; i < n; i++) {
        cout<< arr[i]<<" " ; 
    }
    
    vector<int> res = Freq(arr);
    cout<<endl;
    cout << "Frequencies: ";
    for(int i = 0; i < n; i++) {
        cout << res[i] << " "; // Print frequencies
    }
    
    cout << endl; // New line after output
}