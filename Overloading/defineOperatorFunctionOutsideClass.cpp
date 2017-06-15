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

//2 PART
//Define overloaded outside the class. 
//Example with minus(-) operator.

class Marks{
public:
	Marks(){intmark = 0; extmark = 0;} //Setting to 0 the values.
	Marks(float im, float em) : intmark(im), extmark(em){} //Setting them.

	void display(){
		cout <<	"Internal Mark: " << intmark << endl;
		cout << "Externam mark: " << extmark << endl;
	}

	//So we need to overload the + operator. Because we want
	//this operator to be used with custom "things".
	Marks operator+(Marks add){
		Marks tmp;
		tmp.intmark = intmark + add.intmark;
		tmp.extmark = extmark + add.extmark;
		return tmp;
	}	
	
	//Making the definition inside but implementation outside.
	Marks operator-(Marks sub);

	//Overloading.
	Marks operator*(Marks molt);
	
	//Overloading
	Marks operator/(Marks div);
private:
	float intmark;
	float extmark;
};

//Making the implmeentation outside the class for operator overloading.
Marks Marks::operator-(Marks sub){
	Marks tmp;
	tmp.intmark = intmark - sub.intmark;
	tmp.extmark = extmark - sub.extmark;
	return tmp; //The return must ne aon object of Marks by the definition.	
}

Marks Marks::operator*(Marks molt){
	Marks tmp;
	tmp.intmark = intmark * molt.intmark;
	tmp.extmark = extmark * molt.extmark;
	return tmp;
}

Marks Marks::operator/(Marks div){
	Marks tmp;
	tmp.intmark = intmark / div.intmark;
	tmp.extmark = extmark / div.extmark;
	return tmp;
}


int main(){
	Marks m1(55,30), m2(15,12);
	Marks add = m1 + m2;
	Marks sub = m1 - m2;
	Marks molt = m1 * m2;
	Marks div = m1 / m2;
	cout << "\nADDITION" << endl;
	cout << "--------" << endl;
	add.display();

	cout << "\nSUBTRACTION" << endl;
	cout << "-----------" << endl;
	sub.display();

	cout << "\nMOLTIPLICATION" << endl;
	cout << "--------------" << endl;
	molt.display();

	cout << "\nDIVISION" << endl;
	cout << "----------" << endl;
	div.display();

	return 0;
}
