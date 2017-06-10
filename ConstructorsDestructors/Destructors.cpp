#include <iostream>
#include <string>
using namespace std;

//Destructors usuallu deallocate the memory that the constructor 
//has occupied for the object.
class Human{
public:
	Human(){
		cout << "Memory allocation with constructor for the object." << endl;
	}
	~Human(){
		cout << "Memory deallocation with desctructor for the object. " << endl;
	}
	
private:

};

class Person{
public:
	Person(){
		cout << "Constructor called." << endl;
	}
	~Person(){
		cout << "Deconstructor called." << endl;
	}
private:

};


int main(){
//	Human ector;
	
	//Here it will be called only the constructor because
	//the object is still at the memory.
	//When it will be destroyded then the destructor will be called.
	Person *Pector; 
	Pector = new Person(); 
	
	//Now that we are gonna delete our object pointer that occupies the memory,
	//the destructor method will be called.
	delete Pector;

	return 0;
}
