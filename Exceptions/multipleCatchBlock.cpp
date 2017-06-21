#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;



int main(){
	
	try{	
		//throw "Some exception."; //Will be called the first catch block
		//throw 20; //Will be called the second int catch block.
		throw runtime_error("Runtime error."); //The runtime error third catch will be called.
	}catch(const char *err){
		cout << err << endl;
	}
	catch(int error){
		cout << error << endl;
	}
	catch(runtime_error &e){
		cout << e.what() << endl;
	}



	return 0;
}
