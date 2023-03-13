#include<bits/stdc++.h>
using namespace std;

// Class and Members of the Class
class Student{
  public:  // make members as public to access from anywhere
  string Name; // Members of the class
  int Roll;
  bool Gender;
  void printInformation(){
    cout<<"Name :"<< Name <<endl;
    cout<<"Roll :"<< Roll <<endl;
    cout<<"Gender :"<< Gender <<endl;
  }
}

// Objects of Class
int main(){
  Student A;  // Object A
  A.Name = "Raju";
  A.Roll = 10;
  A.Gender = false;
  A.printInformation(); //function call
  Student B; // Object B
  B.Name = "Saheli";
  B.Roll = 2;
  B.Gender = true;
  B.printInformation(); //function call

}

 -----------------------------------Output---------------------------------------------   
// output for object A   
Name : Raju
Roll : 10
Gender : false  
// output for object B
Name : Saheli
Roll : 2
Gender : true  
