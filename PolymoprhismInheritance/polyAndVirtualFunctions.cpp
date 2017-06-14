#include <iostream>
#include <string>
using namespace std;

class Person{
public:
	//Make it vitual and this way every class can use its own introduce.	
	virtual void introduce(){
		cout <<"I am a person. " << endl;
	}
};

class Student : public Person{
public:
	void introduce(){
		cout << "I am a student. " << endl;
	}
};

//Remove the comments to understand the results.

class Farmer : public Person{
public:
//	void introduce(){
//		cout << "I am a farmer." << endl;
//	}

};

void whoami(Person &p){
	p.introduce();
}

int main(){
	Farmer farmer;
	Student student;
	
	//If it's not virtual then the person introduce will be called.
	//If it's virtual then every class can use it's introduce class member.
	//If the class has no introduce class member then use that from the base class.
	whoami(farmer);
	whoami(student);


	return 0;
}
