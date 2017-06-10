#include <iostream>
#include <string>
using namespace std;

//The overloaded constructor must be with differets arguments with the default,
// or other laredy overloaded contructors.

class Human{
public:
	Human(){
		cout <<"Default constructor. " << endl;
		age = 1;
		name = "Ector";
	}
	
	//Overloaded constructor.
	Human(string n){
		cout << "First overloaded name constuctor. " << endl;
		age = 1;
		name = n;
	}
	
	//Second overloaded contructor.
	Human(int a){
		cout << "Second overloaded age constructor. " << endl;
		age = a;
		name = "Ector";
	}
	
	//Third overloaded constructor.
	Human(string n, int a){
		cout << "Third overloaded name and age constructor. " << endl;
		age = a;
		name = n;
	}
	
	//This methods will only display the values
	void display(){
		cout << "My name is " << name << " and my age is " << age << endl;
	}

private:
	int age;
	string name;
};

int main(){
	Human ectorDefault;
	Human ectorFirst("Andrew");
	Human ectorSecond(16);
	Human ectorThird("Mike", 18);
	
	ectorDefault.display();
	ectorFirst.display();
	ectorSecond.display();
	ectorThird.display();


	return 0;
}
