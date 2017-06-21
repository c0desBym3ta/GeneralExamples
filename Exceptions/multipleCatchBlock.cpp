#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;



int main(){
	
	try{	
		//throw "Some exception."; //Will be called the first catch block
		//throw 20; //Will be called the second int catch block.
		throw runtime_error("Runtime error."); //The runtime error third catch will be called.
	
	//We can write it at the end. If any other exception won't called then this general exception will.
	//So we can have all our cathes. And if any catch won't work this instead will.
	}catch(...){ //In this way we can catch all the exceptions we need.
		cout << "Some excepttion occured." << endl;
	}
	

	return 0;
}
