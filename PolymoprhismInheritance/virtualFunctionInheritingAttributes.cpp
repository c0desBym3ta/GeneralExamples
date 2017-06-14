#include <iostream>
#include <string>
using namespace std;


//The inheritance will be hierarchical. 
//So we have hierarchical nature and also the Gstudent has the virtuality 
//from the base base class.

class Person{
public:
	//Make it virtual
	virtual void introduce(){
		cout << "I am a person." << endl;
	}
};

class Student : public Person{
public:
	void introduce(){	
		cout << "I am a student. " << endl;
	}
};

class Gstudent : public Student{
public:
	void introduce(){
		cout << "I am a graduate student. " << endl;
	}

};

void whoami(Person &p){
	p.introduce();
}

int main(){
	Person person;
	Student student;
	Gstudent gstudent;
	
	
	whoami(person);
	whoami(student);
	whoami(gstudent);

	return 0;
}
