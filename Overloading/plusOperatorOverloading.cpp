#include <iostream>
#include <string>
using namespace std;

//We can make a confront between numbers with our known operators.
//Bu we can use any operator to confront custom object that we have created.
//For making that operation we need
//to overload the operator to use it the way we want.
//THEY ARE NOT DEFINE TO WORK WITH CUSTOM THINGS*
//SO WE NEE OPERATOR OVERLOADING. 
//MAKING A BASE OPERATOR TO WORK WITH CUSOM OBJECTS.

class Marks{
public:
	Marks(){intmark = 0; extmark = 0;} //Setting to 0 the values.
	Marks(int im, int em) : intmark(im), extmark(em){} //Setting them.

	void display(){
		cout <<	"Internal Mark: " << intmark << endl;
		cout << "Externam mark: " << extmark << endl;
	}

	//So we need to overload the + operator. Because we want
	//this operator to be used with custom "things".
	Marks operator+(Marks m){
		Marks tmp;
		tmp.intmark = intmark + m.intmark;
		tmp.extmark = extmark + m.extmark;
		return tmp;
	}	

private:
	int intmark;
	int extmark;
};

int main(){
	Marks m1(10,30), m2(15,12);
	Marks m3 = m1 + m2;
	
	m3.display();
	return 0;
}
