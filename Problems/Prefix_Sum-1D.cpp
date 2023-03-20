#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    int n;
    cin>>n;
   // create vector array size on 'n' number all are '0' value
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];  // 1,4,1
    }
   // create new vector array size of 'n' number with all are '0' values
    vector<int> cum_arr(n,0);
   // store first indexed main array value into cum_arr  
    cum_arr[0]=arr[0]; // cum_arr[0]=1;
  // calculate cumulative sum of all the numbers 
    for(int i=1;i<n;i++){
        cum_arr[i]=cum_arr[i-1]+arr[i]; // 1,5,6
        
    }
    int q;
    cin>>q;
    while(q--){
        int start,end;
        cin>>start>>end;
      // if cum_arr start value is '0' in that case we just print the total sum from 0 to n is cum_arr[end]
        if(cum_arr[start]==0){
            cout<<cum_arr[end]<<endl;
        }
      // else we do substracting end value of cumulative sum and cumulative value of start - 1 
       else{
            cout<<cum_arr[end]-cum_arr[start-1]<<endl;
        }
        
    }
	return 0;
}


--Input--
3
1 4 1
3
1 1 
1 2
0 2
  
--Output--
 4
 5
 6
