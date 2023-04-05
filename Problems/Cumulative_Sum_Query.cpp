// problem : https://www.spoj.com/problems/CSUMQ/
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Initially we are 'n' value
    int n;
    cin>>n;
    // read array size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // create empty array of 'n' size and initially all are '0'
    vector<int> cum_arr(n,0);
    // store '0'th  value of original array into new array
    cum_arr[0]=arr[0];
   // implement cumulative sum from index '1' to n
    for(int i=1;i<n;i++){
        cum_arr[i] = cum_arr[i-1] + arr[i];
    }
    int t;
    cin>>t;
    while(t--){
        int start, end;
        cin>>start>>end;
        // if start value is '0' then print the end index value of the cumulative array
        if(start == 0){
            cout<<cum_arr[end]<<endl;
        }else{
     
            cout<<cum_arr[end] - cum_arr[0]<<endl;
        }
    }

    
}
