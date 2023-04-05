// problem : https://www.codechef.com/problems/BLONDIE
#include<bits/stdc++.h>
using namespace std;

int main(){
    // number of test cases
    int t;
    cin>>t;
    while(t--){
        // array size number
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        // initally we asuume averageand sum as '0'
        int avr=0,sum=0;
        int output;
        for(int i=1;i<=n;i++){
            // if array of cuurent element is '-1', then update the avg
            if(arr[i]==-1){
                avr=i;
                // dividing current_index-1 with all previeous element sum value
                output = sum/(i-1);
                // replace where element value is '-1'
                arr[i]=output;
            }
            // doing sum for all array elements
            sum +=arr[i];
            
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    
}
