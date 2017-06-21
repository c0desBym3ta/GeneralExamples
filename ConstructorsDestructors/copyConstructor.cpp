#include <iostream>
#include <string>
using namespace std;

//Copy constructor is basically and overloaded constructor.
//Everything is good with the simples variables.
//The problem is when we want to use the dymamic allocation.
class Person{
public:

	//Making dynamic with pointer the bit by bit operations takes place. So it copies the info.
	//So at tha name variable contains the address of name so the address wil be copies with results the change of the value.
	//So we need to use a copy constructor.
	Person(string name, int age){
		cout << "Default person constructor." << endl;
		this->name = new string(name);
		this->age = age;
	}

	//Our copy constructor.
	//Copy constructor will be called anytime we copy and object of this class.
	Person(const Person &person){
		//So we need anytime it copies to allocate a different memory and changes the string.
		cout << "Copy person constructor. " << endl;	
		name = new string(*person.name); //It's a memory address so we need to use *.
		age = person.age; //It's not a memory address so no need of *.
	}
	
	void changeNameAge(string name, int age){
		*(this->name) = name;
		this->age = age;
	}
	
	void introduce(){
		cout << "My name is  "<< *name << " and my age is " << age << "." << endl;
	} 
	
	string *name;
	int age;
	
private:

};

int main(){
	cout << "FIRST EXAMPLE" << endl;
	cout << "-------------" << endl;
	//We are make a second object that will be the same as ector object.
	//All member from ector object will be copyied to the doubleEctor object.
	Person ector("Ector", 17);
        cout << "ECTOR: ";
	ector.introduce();
	
	//Making a copy of ector.
	cout << "DOUBLE ECTOR: ";
	Person doubleEctor = ector;
	doubleEctor.introduce();
	
	cout << "\nSECOND EXAMPLE" << endl;
	cout << "---------------" << endl;
	//So let's gonna try to change the valueof our object the our change method.
	ector.changeNameAge("Ector scholes", 29);
	//Changes has been only applied to the ector object.
	cout << "ECTOR: ";
	ector.introduce();
	
	//No change has been applied to the double copy ector object.
	//We need to set it up == to apply tha changes.
	cout << "DOUBLE ECTOR: ";
	doubleEctor.introduce();
	


	return 0;
}
