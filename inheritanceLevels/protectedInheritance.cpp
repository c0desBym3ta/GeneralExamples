#include <iostream>
#include <string>
using namespace std;

class Person{
public:
	void setName(string n){name = n;}

protected:
	string name;
};

//Protected members of base class acts like protected member on derived class.
//Public members of base class acts like protected members of derived class.
class Student : protected Person{
public:
	void display(){cout << "My name is " << name << "." << endl;} //Like protected.
	
	//So wee ne another class to access this protected member name.
	void setStudentName(string n){ setName(n);}
	

};


int main(){
	Student ector;
	ector.setStudentName("ector");
	ector.display();


	return 0;
}
