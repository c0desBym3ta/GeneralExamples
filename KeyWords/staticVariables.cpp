#include <iostream>
#include <string>
using namespace std;

//We can use static inside a function as a class member and as a class member function.
//Let's use static inside a function.



void displayStaticFunction();

class Human{
public:
	//No matter how many pbjects we will be create. Will be only one copy of this static.
	//Cannot be initialized this static member inside this class. Must do it outside.
	static int humanCount;
	
	//Creating our constructor to initialize our static member.
	//So every time we create a human object the humanCount static member will be incremented.
	Human(){
		humanCount ++;
	}
	void humanTotal(){
		cout << "They are " << humanCount  << " people are int this program. " << endl;
	}
private:

};

int Human::humanCount = 0; //Has class scope so we can access it without creating an object.

int main(){
	cout << "First example." << endl;
	cout << "--------------" << endl;
	for(int i = 0; i <3; i++)
		displayStaticFunction();
	
	cout << "\nSecond example. " << endl;
	cout << "---------------" << endl;
	cout << "Human count " << Human::humanCount << " times." << endl;	
	//Creating our human objects.
	Human ector;
	Human joseph;
	Human Andrew;
	Human Bilel;
	ector.humanTotal();
	cout << "Human count " << Human::humanCount << " times." << endl; 
	return 0;
}


void displayStaticFunction(){
	static int counter = 0; //This line will be executed only one time.
	//The it will be stored at the heap.

	cout << "Displa function called " << ++counter  << " times." << endl;
}
