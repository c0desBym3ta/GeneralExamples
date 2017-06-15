#include <iostream>
#include <string>
using namespace std;

//Taking some notes for the restrictions to the operator overloading.

int main(){
	cerr <<"\t\tHERE ARE SOME THINGS THAT CANNOT CHANGE." << endl;
	cerr << "FUNCTION CALL OEPRATOR CAN HAVE DEFAULT PARAMETERS. << endl;
	cerr << "CANNOT CHANGE PRECEDENCE OF THE OPERATOR." << endl;
	cerr << "UNARY OPERANDS WORKS ONLY WORKS WITH ONE PART." << endl;
	cerr << "CANNOT OVERLOAD (?), (::), (.*), (.) this operators. "<< endl;	
	cerr << "OPERATOS FUNCTIONS INHERITS FROM ANY DERIVED CLASS." << endl;
	
	return 0;
}
