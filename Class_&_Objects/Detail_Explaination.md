# Class And Objects
## Basic concepts about Class and Objects in Advanced DSA ([Examples](Class&Objects.cpp))
## 1. Class
- In advanced data structures and algorithms (DSA), a class is a fundamental concept of object-oriented programming (OOP) that represents a blueprint or template for creating objects that have specific properties and behaviors.
- A class defines the attributes and methods that objects of that class will have.
-  classes are a powerful tool in advanced DSA because they allow you to organize complex data structures and algorithms in a modular and reusable way, and provide a high degree of abstraction that makes it easier to reason about your code. 

Syntax of Class :

```c++
#include<bits/stdc++.h>
using namespace std;

// Class Representation , here Student is Class name
Class Student{
    ....... // Member Of Class
    ....... // Member Of Class
    ....... // Member Of Class  
};
```
Example:
```c++
#include<bits/stdc++.h>
using namespace std;

Class Student{
    string Name; // Member Of Class
    int Roll;    // Member Of Class
};
```
## 2. Objects
- In advanced data structures and algorithms, the concept of a class object refers to an instance of a class, which is a user-defined data type that encapsulates data and methods.
- In object-oriented programming, a class serves as a blueprint or template for creating objects. It defines the attributes (data) and behaviors (methods) of the objects that can be created from it. An object of a class can be created using the class constructor.

Syntax Of Objects:
```c++
#include<bits/stdc++.h>
using namespace std;

// Class Representation , here Student is Class name
Class Student{
    ....... // Member Of Class
    ....... // Member Of Class
    ....... // Member Of Class  
};
int main(){
 Student A; // Object of the class 
 Student B; // Object of the class
 Student C; // Object of the class
}
```
Example:
```c++
#include<bits/stdc++.h>
using namespace std;

Class Student{
public:     //make public to access the member of the class
   string Name; // Member Of Class
   int Roll;    // Member Of Class 
};
int main(){
// Attribute with Values of object A
 Student A;  
 A.Name = "Raju"; 
 A.Roll = 1;
// Attribute with Values of object B
 Student B; 
 B.Name = "Kaju"; 
 B.Roll = 2;
// Attribute with Values of object C
 Student C; 
 C.Name = "Shreyas"; 
 C.Roll = 3;
}
```
## 3. Constructor & Destructor ([Examples](Constructor&Destructor.cpp))

- In advanced data structures and algorithms (DSA), constructors and destructors are essential concepts used in object-oriented programming languages like C++, Java, and Python.
- These concepts help in managing the memory and resources of objects created during program execution. 

## In C++, a constructor can be declared in three ways: 

### 1. Default Constructor  
### 2. Parameterized Constructor  
### 3. Copy Constructor  

## 1. **Default** Constructor

- As a default constructor with no arguments 
- The default constructor initializes the object with default values

Syntax:

```c++
#include<bits/stdc++.h>
using namespace std;

// Class representation 
class Student{
    public:
    .......... // Member of the class
    .......... // Member of the class
        
    // Default Construction representation 
    Student(){
        cout<<"Default Constructor"<<endl;
    }    
};

int main(){
    Student A; // Object of the Class A
}
```
## 2. Parameterized Constructor

- As a parameterized constructor that accepts one or more arguments.
- The parameterized constructor initializes the object with the values passed as arguments.

Syntax:

```c++
#include<bits/stdc++.h>
using namespace std;

// Class representation 
class Student{
    public:
    .......... // Member of the class
    .......... // Member of the class
        
    // Parameterized Construction representation 
    Student(string s1, int n1){
        Name = s1;
        Roll = n1;
        cout<<"Parameterized Constructor"<<endl;
    }    
};

int main(){
    Student A("para1", para2); // Object of the Class A
}
```

## 3. Copy Constructor

- Copy constructors, which initialize an object by copying the values of another object of the same class.

Syntax:

```c++
#include<bits/stdc++.h>
using namespace std;

// Class representation 
class Student{
    public:
    .......... // Member of the class
    .......... // Member of the class
        
    // Parameterized Construction representation 
    Student(string s1, int n1){
        Name = s1;
        Roll = n1;
        cout<<"Parameterized Constructor"<<endl;
    } 
    // Copy Construction representation 
    Student(Student &A){
        Name = A.Name;
        Roll = A.Roll;
        cout<<"Copy Constructor"<<endl;
    } 
};

int main(){
    Student A("para1", para2); // Object of the Class A
    Student B = A;
}
```
## Destructor

- A destructor, on the other hand, is another special member function of a class that is invoked automatically when an object is destroyed.
-  Its purpose is to release any resources allocated by the object during its lifetime.
- This includes freeing memory, closing open files, releasing network connections, and so on.
-  In C++, a destructor is declared with the same name as the class, preceded by a tilde (~).

Syntax:

```c++
#include<bits/stdc++.h>
using namespace std;

// Class representation 
class Student{
    public:
    .......... // Member of the class
    .......... // Member of the class
        
    // Parameterized Construction representation 
    Student(string s1, int n1){
        Name = s1;
        Roll = n1;
        cout<<"Parameterized Constructor"<<endl;
    } 
    // Destructor representation 
    ~Student(){
        cout<<"Destructor representation"<<endl;
    } 
    
};

int main(){
    Student A("para1", para2); // Object of the Class A
}
```

## Pass By Value 

Copy the value from main() function and use it in required function()



## Pass By Reference

Same value from main() function pass to req








