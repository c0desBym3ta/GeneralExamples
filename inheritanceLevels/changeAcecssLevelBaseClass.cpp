#include <iostream>
#include <string>
using namespace std;


//In the derived class the members of base class are protected because the inheritance is.
//So for changing the access level we can use the access declaration.

class Person{
public:
	void setName(string n){Person::name = n;}
	string getName() const {return name;}

protected:
	string name;
};

class Student : private Person{ //All of base class members are private in base class.
public:
	
	//Changing the access level.
	using Person::name; //Now name member it will be act like public.
	using Person::setName;
	using Person::getName;

	void display(){
		cout << "My name is " << name << endl;
	}
	void setStudentName(string n){setName(n);}
};





int main(){
	//So here we can take direct access to the name 
	Student ector;
	ector.name = "Ector";
	ector.display();
	cout << "\nSET METHOD" << endl;
	cout << "----------" << endl;
	cout << "UPDATED NAME" << endl;
	ector.setName("Josepgh");
	cout << "GETTING NAME" << endl;
	cout << "My new name is " <<  ector.getName() << "." << endl;
	
	return 0;
}

