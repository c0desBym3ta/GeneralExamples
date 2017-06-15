#include <iostream>
#include <string>
using namespace std;

//Diamond problem. We have a base class A. And two derived classes  B and C
//that inherits from this base class. If we make an another class D that
//inherits from B and C a want to take access from tha A class. Then the D class
//has to use one one from the B or C class to take that access to the C class.
//But to make this happers we have the problem.
//Witch class B or C will use D to take access to the A class.

//Let's wee what happens with the constructor in case of virtual inheritance.

class Animal{
public:
	Animal(){cout << "Animal constructor." << endl;}
	void walk(){
		cout << "The animal can walk! " << endl;
	}
};

class Tiger : virtual public Animal{
public:
	Tiger(){cout << "Tiger construvtor." << endl;}
	
};

//If we gonna use a derived class as a base class for another derived class,
//is good practice to use it virtual.
//This is the virtual inheritance.

class Lion :virtual public Animal{
public:
	Lion(){cout << "Lion constructor." << endl;}
};

class Liger : public Tiger, public Lion{
public:
	Liger(){cout << "Liger constructor." << endl;}
};

int main(){
	//In virtual inheritance the constructor of liger will
	//directly called the base base base class constructor.
	Liger liger;
	liger.walk();

	return 0;
}
