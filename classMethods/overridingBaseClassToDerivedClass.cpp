#include <iostream>
#include <string>
using namespace std;

//Small example of overriding a method from base class.

class Person{
public:
	void introduce(){
		cout << "Hi i am a person. " << endl;
	} 

};

class Student : public Person{
public:
	void introduce(){
		cout << "Hi i am a student." << endl;
	}

};

int main(){
	cout << "Tesk, OK!" << endl;
	Student ector;
	
	//The method of base class is overriding from the same method a derive class.
	ector.introduce();

	return 0;
}
