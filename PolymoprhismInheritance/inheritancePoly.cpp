#include <iostream>
#include <string>
using namespace std;

class Person{
public:
	Person(string n = "Unknown", int a = 0){
		name = n;
		age = a;
	}
	virtual void display(){
		cout << "Hi i am the prof. ";
		cout << "My name is " << name << " and my age is " << age << "."<< endl;
	}
	virtual int birthday(){
		++age; 
		return age;
	}
	
	void setName(string name){Person::name = name;}
	string getName() const{return name;}
	void setAge(int age){Person::age = age;}
	int getAge() const{return age;}

protected:
	string name;
	int age;
};


class Student : public Person{
public:	
	Student(string name, int age, int id) : Person(name,age), id(id) {}

	virtual void display() override{
		cout << "Hi i am a student. ";
		cout << "My id number is " << id << ". ";
		cout << "My name is " << name << " and my age is " << age << "." << endl;
	}
	virtual int birthday() override{
		++age;
		return age;
	}

	void setId(int id){Student::id = id;}
	int getId() const{return id;}

private:
	 int id;
};

void line();
void lines();

int main(){	
	
	Person prof("Mr, Smith", 44);
	Student ector("Ector", 17, 2198);
	cout << "PRESENTATION" << endl;
	cout << "------------" << endl;
	prof.display();
	ector.display();
	line();
	
	cout << "MAKING CHANGES" << endl;
	cout << "--------------" << endl;
	cout << "Ector is changing his name to George." << endl;
	ector.setName("George");
	cout << "STUDENT: My name has has changed to " << ector.getName() << endl;
	line();
	
	cout << "Prof Mr, Smith is chaning his name to Mr, Coole." << endl;
	prof.setName("Mr, Coole");
	cout << "PROF: My name has changed to "<< prof.getName() << endl;
	line();
	
	cout << "HAVING BIRTHDAY" << endl;
	cout << "---------------" << endl;
	cout << "STUDENT: It's my birthday, my age will be incremented. " << endl;
	ector.birthday();
	cout << "PROF: It's my birthday, my age will be incremented. < " << endl;
	prof.birthday();
	cout << "Student's current age is " << ector.getAge() << "." << endl;
	cout << "Prof's current age is " << prof.getAge() << "." << endl;
	line();
	
	cout << "FINAL DISPLAY" << endl;
	cout << "-------------" << endl;
	prof.display();
	ector.display();
	line();
	
	
	return 0;
}

void line(){
	cout << endl;
}
void lines(){
	line();line();
}
