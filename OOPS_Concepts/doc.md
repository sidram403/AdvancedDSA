# OOPS Concepts

## 1. Inheritance

- Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class to inherit properties and behavior from another class.
- In C++, inheritance is used to create new classes (derived classes) that are built upon existing classes (base classes).

**To implement inheritance in C++, the derived class is created using the syntax :**

```c++
class DerivedClassName : AccessSpecifier BaseClassName
{
    // class members
};
```

**Explanation :**  where `DerivedClassName` is the name of the derived class, `AccessSpecifier` is the access specifier (`public`, `protected`, or `private`) that determines how the derived class can access the members of the base class, and `BaseClassName` is the name of the base class from which the derived class inherits.

**Example :**

```c++
#include<bits/stdc++.h>
using namespace std;


class ParentClass{
public:
    float X, Y;
    void BringYourChild(float xa, float ya){
        X = X + xa;
        Y = Y + ya;
    }
};

class ChildClass : public ParentClass{
public:
    const char* Name;
    void PrintChildName(){
        cout<<Name<<endl;
    }
    void PrintSchoolCoordinate(){
        cout<<X<<endl;
        cout<<Y<<endl;
    }
};
int main(){
    ChildClass a; // ChildClass Object 'a'
    a.X = 10; // store 'X' value
    a.Y = 15; // store 'Y' value
    a.BringYourChild(10.5, 15.5); // store 'xa' and 'ya' value
    a.Name = "Boby"; // store 'Name' value
    a.PrintChildName(); // print ChildName 
    a.PrintSchoolCoordinate(); //print SchoolCoordinate 'X = 10 + 10.5' and 'Y = 15 + 15.5'
    

  return 0;  
}
```

**Explanation :** 

- Above example, `AccessSpecifier` used here `public` , and `BaseClassName`  is `ParentClass`  in `DerivedClassName`  called `ChildClass`  .
- Created `ChildClass`  objects called `a`  , and store the value of `X`  , `Y`  , `xa`  , and `ya`  .
- Stored ChildName also called `Boby`  , and printed.
- Printed total School Coordinate value  'X  = 10 + 10.5 = 20.5'  and ' Y = 15 + 15.5 = 30.5'

