#include <iostream>
#include <string>
using namespace std;

//How to take access to the overrided class.

class Person{
public:
	void introduce(){
		cout << "Hi i am a person. " << endl;
	}

};

class Student : public Person{
public:
	void introduce(){
		cout << "Hi i am a student. " << endl;
	//Second Way
	Person::introduce(); //Inside because at the main we call this work that is happening
			    //inside this function method.	
	}

};

int main(){
	Student ector;
	//Here it's called the derived class method because ovverides base's class method.
	ector.introduce();
	
	//Let's see how to take access to the overrided base class method.
	//Another way to to it is to write this example inside the derived method class.
	//ector.Person::introduce();

	

	return 0;
}

