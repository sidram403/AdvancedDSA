#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int time;
    cin>>time;
    int maxValue = arr[0];
    for(int i=1;i<=n;i++){
        if(arr[i] > maxValue){
            maxValue = arr[i];
        }
    }
    int start = 1, end = maxValue, speed = 0;
    for(int i=1;i<maxValue;i++){
        int mid = start + (end - start)/2;
        int ans , sum = 0;
        for(int j=0;j<n;j++){
            if(arr[j]%mid == 0){
                ans = arr[j]/mid;
            }else{
                ans = (arr[j]/mid)+1;
            }
            sum +=ans;
        }
        if(sum < time){
            speed = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        
    }
    cout<<speed<<endl;

  return 0;  
}

--Input--
4
5 3 7 10
11
  
--Output--
3  
  
