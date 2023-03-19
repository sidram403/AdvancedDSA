#include <iostream>
using namespace std;

int main() {
   int n,x=0;
   cin>>n;
   while(n--){
       string s;
       cin>>s;
       if(s[1]=='+'){
           ++x;
       }else{
           --x;
       }
   }
   cout<<x<<endl;
   return 0;
}

--Input--
1
++X

--Output--
1 
  
--Input--
2
X++
--X

--Output--
0   
  
  
