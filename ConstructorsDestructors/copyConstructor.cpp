#include <iostream>
#include <string>
using namespace std;

//Copy constructor is basically and overloaded constructor.
//Everything is good with the simples variables.
//The problem is when we want to use the dymamic allocation.
class Person{
public:
	Person(string name, int age) : name(name), age(age){}
	
	void changeNameAge(string name, int age){
		Person::name = name;
		Person::age = age;
	}
	
	void introduce(){
		cout << "My name is  "<< name << " and my age is " << age << "." << endl;
	} 
	
	string name;
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
