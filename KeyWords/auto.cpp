#include <iostream>
#include <string>
using namespace std;


//Keyword auto identifies itself type of variables.
//IMPORTAND: Needs to be initialized when it will be declared.
int sum(){
	int n1,n2;
        cout << "First number: "; cin >> n1;
        cout << "Second number: "; cin >> n2;
        return n1+n2;
}


int main(){

	int age = 10;
	auto ag = 10;
	
	cout << "age normal declaration: " << age << endl;
	cout << "ag auto declaration: " << ag << endl;
	cout << endl;
	
	cout << "SECOND EXAMPLE" << endl;
	cout << "--------------" << endl;
	const auto sum = sum();
	cout << "Sum result: " << sum << endl;	
	
	return 0;
} 



