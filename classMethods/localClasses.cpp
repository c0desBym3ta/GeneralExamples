#include <iostream>
#include <string>
using namespace std;


//Simple making of local classes inside a function.

void studentList(){
	class Student{
	public:
		string name;
		int age;
		void display(){
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
	};
	Student ector;
	ector.name = "Ector.";
	ector.age = 17;
	ector.display();
}

int main(){
	studentList();

	return 0;
}

