// problem : https://www.geeksforgeeks.org/place-k-elements-such-that-minimum-distance-is-maximized/
#include<bits/stdc++.h>
using namespace std;

int placedvalue(int arr[], int n, int k){
    sort(arr, arr+n); // sort array
    int start = 0, end = n-1, ans=-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        int lastplaced = arr[0]; // initially 1st array element is last placed value
        int placedCount = 1; // placed count initially take as '1'
        for(int i=1;i<n;i++){
            // compare the difference between current element in the array and last placed value is greter than mid
            if(arr[i] - lastplaced >= mid){
                placedCount++; // increment placed count
                lastplaced = arr[i]; // store current element in the array as last placed 
               // compare the placed count is equal to 'k' value
                if(placedCount == k){
                   ans = mid; // store mid value in ans
                   break; // break if condtion true
                }
            }
        }
        
        if(placedCount < k){
            end = mid - 1; // move the end index value , delete right part value
        }else{
            start = mid + 1; // move the start index value , delete left part value
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
    int k;
    cin>>k;
    int res = placedvalue(arr,n,k);
    cout<<res;
    
    return 0;
}


--Input--
5
1 2 8 4 9
3
--Output--
3  
