#include <iostream>
#include <string>
using namespace std;


class Person{
public:
	void setName(string n){Person::name = n;}

protected:
	string name;
};


//Members of base class are gonna act like private member in the derived class.
class Student : private Person{
public:
	void display(){cout << "My name is " << name << "." << endl;}
	void setStudentName(string n){setName(n);}

protected:

};

class GStudent : public Student{
public:
	void setGStudentName(string n){setStudentName(n);}

protected:

};

int main(){
	cout << "First example. " << endl;
	cout << ".............. " << endl;
	Student ector;
	ector.setStudentName("Ector");
	ector.display();
	cout << endl;
	
	cout << "Second example. " << endl;
	cout << "............... " << endl;
	GStudent odis;
	odis.setGStudentName("odis");
	odis.display();

	return 0;
}
