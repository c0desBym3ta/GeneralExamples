#include <iostream>
using namespaces std;
double division(int a, int b);

int main(){
	double n1  = 50;
	double n2  = 0;
	double div = 0;
	try{	
		div = divistion(n1,n2);
		cout << div << endl;
	}catch (const char *msg){
		cerr << msg << endl;
	}

	return 0;
}

double division(int a, int b){
	if(b==0){
		throw "Not allowed division by 0";
	}
	return a/b;
}
