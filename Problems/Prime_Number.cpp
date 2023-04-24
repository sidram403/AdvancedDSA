#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int count = 1;
  if(n==1){
   cout<<"Not Prime Number";
  }else{
    for(int i=1; i<=n/2; i++){
      if(n%i==0){
        count++;
      } 
    }
    if(count == 2){
      cout<<"Prime Number";
    }else{
      cout<<"Not Prime Number";
    }
  }  
  
  return 0;
}
