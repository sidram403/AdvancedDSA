#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    // inupt array
    vector<int> arr;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
  // dummy array which is size of array 'n+1', all are '0' initially
    vector<int> dummy_arr(n+1,0);
    int t;
    cin>>t;
    while(t--){
      // read start and end index, also value to add from start to end index
        int start,end,val;
        cin>>start>>end>>val;
        // here adding the value from input at tyhe start index
        dummy_arr[start] +=val;
        // here substracting the value from input at end+1 index
        dummy_arr[end+1] -=val;
    }
    // cumulative sum for dummy array
    for(int i=1;i<=n;i++){
       dummy_arr[i] +=dummy_arr[i-1]; 
    }
    // adding both original array and dummy array
    for(int i=0;i<n;i++){
        arr[i] +=dummy_arr[i];
    }
    //printing after the array sum
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
       
        
  return 0;	
}
