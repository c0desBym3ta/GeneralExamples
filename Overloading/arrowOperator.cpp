#include <iostream>
#include <string>
using namespace std;

// -> Operator points and it use usualy to pointers.


class Marks{
public:
	Marks(int m) : mark(m){}
	
	void whatsYourMark(){
		cout << "My mark: " << mark << endl;
	}

	//So here we have to use it and overload it like pointer.
	//Unary operator so nothing to be defined inside the ().
	//It will be called by the c++ implicitly.
	Marks *operator->(){
		return this;
	}
private:
	int mark;
};


int main(){
	Marks ectorMark(60);
	ectorMark.whatsYourMark();
	//But now we have overload also the arrow operator so we can use
	//to point to our object.
	ectorMark->whatsYourMark();	

	
	return 0;
}
