#include <iostream>
#include <string>
using namespace std;

class Person{
public:
	void setName(string n){Person::name = n;} //Accesing to protected member name.

protected:
	string name;

};


//Protected members of base class acts like protected in derived class.
//Public members of base class acts like public in derived class.
//Private member of base class are not accessible from the derived class.

class Student : public Person{ //Public inheritance
public:
	void display(){cout << "My name is "<< name << "." << endl;}

protected:

};


int main(){
	Student ector;
	ector.setName("ector");
	ector.display();



	return 0;
}
