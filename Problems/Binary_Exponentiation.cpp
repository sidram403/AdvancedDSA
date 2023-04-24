// Binary Exponentiation
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int ans=1;
    while(k>0){
        if(k%2==1){
            ans = ans * n;
            k--;
        }else{
            n = n * n;
            k = k/2;
        }
    }
    cout<<ans<<endl;

  return 0;  
}
--Input--
n = 2 k =5

--Output--
32
