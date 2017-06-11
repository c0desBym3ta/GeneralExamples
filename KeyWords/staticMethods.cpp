#include <iostream>
#include <string>
using namespace std;

//Making some 
class Human{
public:
	static int human_count;
	Human(){++human_count;}
	void humanTotal(){
		cout << "There are " << human_count << " people in this program. " << endl;
	}
	
	//We can use only static variables inside this static method.
	//Only one copy of this method will exist.
	static void humanCount(){
		cout << "There are " << human_count << " people in this program. " << endl;
	}
private:

};

int Human::human_count = 0;


int main(){
	cout << "Human count " << Human::human_count << " times." << endl;
	Human ector;
	Human andrew;
	Human joseph;
	//To call the static method we can only use the scope resolution.
	Human::humanCount();

	return 0;
}
