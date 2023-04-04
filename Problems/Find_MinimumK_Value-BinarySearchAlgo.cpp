#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n, int sum){
    int s = 1 , e =n;
  // initially 'ans' value is last number in the array
    int ans = n;
    while(s<=e){
        int mid = s + (e-s)/2;
        int divide_sum=0,k;
      // Dividing all the element with mid value and making the total sum
        for(int i=0;i<n;i++){
            divide_sum += arr[i]/mid;
            
        }
      // divide_sum is smaller then given sum, then store 'mid' value in 'k'
        if(divide_sum < sum){
            k = mid;
            // if 'k' value is less than 'ans', then store 'k' value in 'ans'. this is to find minimum 'k' value
            if(k<ans){
                ans = k;
            }
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    int output = binary_search(arr,n,sum);
    cout<<output;
}
