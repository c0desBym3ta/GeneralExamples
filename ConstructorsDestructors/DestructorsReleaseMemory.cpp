#include <iostream>
#include <string>
using namespace std;

class Human{
public:
	Human(string n, int a){
		name = new string;
		age = new int;
		*name = n;
		*age = a;
	}
	
	void display(){
		cout << "My name is " << *name << " my age is " << *age  << "." << endl;
	}
	
	~Human(){
		delete name;
		delete age;
		cout << "Destructor called. Memory realeased." << endl;
	}
	
private:
	string *name;
	int *age;
};


int main(){
	Human *ector = new Human("Ector", 23);
	ector->display();

	delete ector;

	return 0;
}



