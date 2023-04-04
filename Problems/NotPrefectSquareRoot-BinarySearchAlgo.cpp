#include<bits/stdc++.h>
using namespace std;

int binary_search(int n){
    int s = 1 , e =n;
    int ans = 0;
    while(s<=e){
        int mid = s + (e-s)/2;
        int product = mid * mid;
        if(product==n){
            return mid;
        }else if(product>n){
            e = mid - 1;
        }else{
            ans = mid;
            s = mid + 1;
        }
        
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int output = binary_search(n);
    cout<<output;
}
