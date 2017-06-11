#include <iostream>
#include <string>
using namespace std;

//Protected and private can be accessible only by the "things" inside the class.
//The othern classes that not inherits have no access to this private/protecetd "things".
//So by specifing a function as friend of this class we can take access to all this  members.
class Human{
public:
	Human(string n, int a){name = n; age = a;}
	void tellme(){
		cout << "Name: "<< name << endl << "Age: " << age << endl;
	}
	//This is not a member function of this Human class.
	//Something like making the prototype inside the class but implements outside it.
	friend void display(Human man);
protected:


private:
	string name;
	int age;
};

//Implementing the class without the friend keyword.
//We use it only to make it friend with the class.

void display(Human man){
	cout << "Name: " << man.name << endl << "Age: " << man.age << endl;
}


//If a class being declared as friend then all variables from the class
//will be accessible also to the friend class.
//Of course all this work inside the class that you wanna be friend.
//EXAMPLE GIVEN: friend class ClassName;

int main(){
	Human ector("Ector", 22);
	//Without the friend keyword name and age will not be accessible.
	display(ector);
	


	return 0;
}
