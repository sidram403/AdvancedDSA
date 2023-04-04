#include<bits/stdc++.h>
using namespace std;

int binary_search(int n){
    int s = 1 , e =n;
    while(s<=e){
        int mid = s + (e-s)/2;
        int product = mid * mid;
        if(product==n){
            return mid;
        }else if(product>n){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int output = binary_search(n);
    cout<<output;
}
