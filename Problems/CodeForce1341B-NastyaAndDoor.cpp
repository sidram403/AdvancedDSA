// Problem : https://codeforces.com/problemset/problem/1341/B
#include <bits/stdc++.h>
using namespace std;


int main() {
  // Initially read number of test cases
    int t;
    cin>>t;
    while(t--){
      // read number of elements 'n' and window size 'k'
        int n,k;
        cin>>n>>k;
        int arr[n+2];
        for(int i=1;i<=n;i++){
            cin>>arr[i]; // read all elements
        }
        
        int min_index = 1;
        int max_peak = 0;
      // run upto window size value 'k'
        for(int i=2;i<k;i++){
          // compare present element greater than two neighbhors
           if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
               max_peak++; // increament max_peak value
           } 
        }
        int last_peak = max_peak;
        for(int i=k+1;i<=n;i++){
            int p = last_peak;
          // if removed element is helping to make any peak value, then decrement the peak value 'p'
            if(arr[i-k+1]>arr[i-k] && arr[i-k+1]>arr[i-k+2]){
                p--;
            }
          // if added element on last position is helping to make any peak value , then increament the peak value 'p'
             if(arr[i-1]>arr[i-2] && arr[i-1]>arr[i]){
                p++;
            }
            // compare peak value 'p' is greater than max_peak value, then store max_peak value and Start Index value
            if(p>max_peak){
                max_peak = p;
                min_index = i-k+1;
            }
            last_peak = p;
        }
        cout<<max_peak+1<<" "<<min_index<<endl;
    }
       
        
  return 0;	
}
