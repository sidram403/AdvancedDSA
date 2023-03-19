#include <iostream>
using namespace std;

int main() {
   string n;
   cin>>n; // initially intialized as a string 
   for(int i=0;i<n.length();i++){
       int digit = n[i] - '0'; // char converted into intger by ASCII Value
       if(digit >= 5){   // Compare digit is greater or equal to 5
           digit = 9 - digit;  // invert the digit
       }
       n[i] = digit + '0';  // back to convert intger to char
   }
//   Compare the final value does not start with '0'
   if(n[0] == '0'){  
       n[0]= 9;
   }
   cout<<n<<endl;
   return 0;
}

--Input--
27

--Output--
22  
  
