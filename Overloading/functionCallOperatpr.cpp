#include <iostream>
#include <string>
using namespace std;

//Overloading the () function call operator.
//Same rules for the special operators.
//So no statick function and no friend function.

class Marks{
public:
	Marks(int m) : mark(m){cout <<"Marks constructor called." << endl;}

	void whatsYourMark(){
		cout << "My mark : " << mark << endl;
	}
	
	//Overloading
	Marks operator()(int mk){
		mark = mk;
		cout << "Operation function called." << endl;
		//returning current object with this keyWord.
		return *this;		
	}
	
private:
	int mark;
};

int main(){
	cout << " () OF CONSTRUCTOR" << endl;
	cout << " -----------------" << endl;
	Marks ectorMark(48);
	ectorMark.whatsYourMark();
	
	//Here is the call of the operator function
	//For making it clear i will print 2 texts.
	cout << "\n () OF THE OVERLOADING FUNCTION CALL OPERATOR" << endl;
	cout << " --------------------------------------------" << endl;
	ectorMark(44);
	
	return 0;
}
