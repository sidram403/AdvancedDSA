#include<bits/stdc++.h>
using namespace std;

// Class with Constructor & Destructor
class Student {
  public:
  string Name;
  int Roll;
  // Default Constructor which takes empty paramaters 
  Student(){
   cout<<"Default Constructor"<<endl;  
  }
  // Paramaterized Constructor which takes some paramaters
  Student(string n, int r){
    Name = n;
    Roll = r;
    cout<<"Paramaterized Constructor"<<endl;
  }
  // Copy Constructor which copies members of the Class B to Class C 
  Student(string &B){
    Name = B.Name;
    Roll = B.Roll;
    cout<<"Copy Constructor"<<endl;
  }
  ~Student(){
   cout<<"Destructor"<<endl;
  }
  void printInformation(){
    cout<<"Name :"<< Name <<endl;
    cout<<"Roll :"<< Roll <<endl;
  }
}

int main(){
  Student A;
  A.printInformation(); // function call to print information for class A
  Student B("Raju", 1); 
  B.printInformation(); // function call to print information for class B
  Student C = B;   // Copy the members of Class B and assign to Class C
  C.printInformation(); // function call to print information for class C

}


----------------------------------------Output----------------------------------------------------------
//  For Class A
  Default Constructor
  Name : ""
  Roll : 
// For Class B
  Paramaterized Constructor
  Name: "Raju"
  Roll : 1  
// For Class C    
  Copy Constructor
  Name: "Raju"
  Roll : 1
// Destructor
    Destructor
    Destructor
    Destructor
    
