#include <iostream>
#include <string>
using namespace std;

//Every object in C++ has access to its own address through this pointer. !IMPORTANT!
//Is an impicit parameter to all member functions

class Person{
public:
	void setAge(int age){Person::age = age;}
	void showAge(){ 
		cout << "Age is " <<this-> age << "." << endl;
		//this->showAge(); We can also make this.
	}

private:
	int age;
};

int main(){
	Person ector;
	ector.setAge(26);
	ector.showAge();


	return 0;
}
