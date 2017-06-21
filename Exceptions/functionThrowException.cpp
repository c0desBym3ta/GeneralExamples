#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;


		//Here inside the () we need to specify otherwise no throw exception will work.
		//So if we leave blanc the parameters then the programm will be crach.
void test() throw(int,char,runtime_error){
	//throw 20;
	//throw 'c';
	throw runtime_error("What the hack.");
}

int main(){
	try{
		test();
	}catch(int e){
		cout << "Integer type " << e << endl;
	}
	catch(char c){
		cout << "Character type " << c << endl;
	}
	catch(runtime_error r){
		cout << "Runtime error type " << r.what() << endl;
	}
	catch(...){
		cout << "Some exception occured." << endl;
	}

	return 0;
}
