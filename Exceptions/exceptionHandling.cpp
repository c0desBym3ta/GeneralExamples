#include <iostream>
#include <string>
using namespace std;


int main(){
	int a = 10, b = 0;
	int c;
	
	try{
		if(b == 0)
			throw "Divide by 0 error.";
		c = a/b;
	}catch(const char *ex){
		cout << "Exception occured. Error: " << ex << endl;
	}

	

	return 0;
}
