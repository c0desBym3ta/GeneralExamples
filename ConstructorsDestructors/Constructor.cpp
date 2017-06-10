#include <iostream>
#include <string>
using namespace std;

//Constructors called automatically. So they are usually used to initialized some values.
//If we not called them they are automatically created with no initialization.
//If constructor was private it will not be displayed at tha main.
class Human{
public:
	Human(){
	cout << "Constructor is called." << endl;
	name = "ector";
	age = 16;
	}		
	void display(){
		cout << "My name is " <<  name  << " and my age is " << age << endl;
	}
private:	
	string name;
	int age;
};


int main(){
	Human human;
	
	human.display();

	return 0;
}
