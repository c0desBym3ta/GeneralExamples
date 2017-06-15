#include <iostream>
#include <string>
using namespace std;

//Ovelroading short hand operators (-=, +=).
//Make the implementation as friend function.

class Marks{
public:
	Marks(){mark = 0;}
	Marks(int m) : mark(m) {}

	void display(){
		cout << "Mark : " << mark << endl;
	}
	
	void operator+=(int bonusMark){
		mark = mark + bonusMark;
	}
	
	friend void operator-=(Marks &currObj, int redMark); //Making it friend function of this class.
private:
	int mark;
};

void operator-=(Marks &currObj, int redMark){
	currObj -= redMark;
}

int main(){
	Marks ectorMark(65);
	ectorMark.display();
	
	cout << "\nUSING += OPERATOR" << endl;
	cout << "-----------------" << endl;
	ectorMark += 50;
	ectorMark.display();
	
	cout << "\nUSING -= OPERATOR" << endl;
	cout << "-----------------" << endl;
	ectorMark -= 30;
	ectorMark.display();	
	
	return 0;
}
