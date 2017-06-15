#include <iostream>
#include <string>
using namespace std;

//Class with pure virtual function becomes abstract class.
//From this abstract class we cannot create objects.
//Incomplete type that can be used for foundation for our derived classes.
//So it's an incomplete method so we cannot create objects from this class.
class Person{
public:
	//In this way we can define a pure virtual function.
	//All derived class must override this pure virtual function.
	//If they do not make that override then compilers hits an error.
	virtual void introduce() = 0;

};

//But we can also implement this pure virtual function with the scope resolution.

//This will be the default introduce function for the classes
//that does not have an implementation at their own introduce function.
void Person::introduce(){
	cout << "I am a person."<< endl;
}

class Student : public Person{
public:
	 void introduce(){
//		cout << "I am a student."<<endl;
//	//We can also called the base default class here inside derived class.
//		Person::introduce();
	}
};



int main(){
	Student student;
	student.introduce();
		
	return 0;
}
