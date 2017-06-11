#include <iostream>
#include <string>
using namespace std;

class Person{
public:
	void introduce(){
		cout << "Hi i am a person." << endl;
	}
};

class Student : public Person{
public:
	void introduce(){ //Overriding the base's class method.
		cout <<"Hi i am a student. " << endl;
	}
};

//creating a person onbject;
void whoIsThis(Person p){
	p.introduce();
}

void whoIsThis2(Student s){
	s.introduce();
}

int main(){
	Student ector;
	ector.introduce(); //Overrided method will be called from derived class.
	whoIsThis(ector); //Method from base class will be called. Invoked person object.
	whoIsThis2(ector); //Method from derived class will be called. Invoked student object.
	return 0;
}
