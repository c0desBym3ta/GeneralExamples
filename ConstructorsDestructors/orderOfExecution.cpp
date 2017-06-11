#include <iostream>
#include <string>
using namespace std;

//Constructor of base class called first and then from the derived class.
//Destructor of derived class called first and then from the base class.

class Person{
public:
	Person(){cout << "Base class constructor called." << endl;}
	~Person(){cout << "Base class destructor called." << endl;}

};


class Student : public Person {
public:
	Student(){cout << "Derived class constructor called." << endl;}
	~Student(){cout << "Derived class destructor called." << endl;}


};


int main(){
	cout << "MAKING OBJECT FROM DERIVED CLASS" << endl;
	cout << "--------------------------------" << endl;
	Student ector;
	
	return 0;
}
