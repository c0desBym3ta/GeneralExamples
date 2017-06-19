#include <iostream>
#include <string>
using namespace std;

int sum(int n1, int n2, int res);
int ref(int n1, int n2, int &res);

int main(){

	int n1 = 5;
	int n2 = 6;
	int res = 0;
	
	cout << "PASSING BY VALUE" << endl;
	cout << "----------------" << endl;
	cout << "Sum before function : " << res << endl;
	
	//In this way the res is equal to what return the sum function. So res will be changed.
	//res = sum(n1,n2,res);
	
	cout << "Sum after function : " <<  res << endl;
	cout << endl;
		
	cout << "PASSING BY REFERENCE" << endl;
	cout << "--------------------" << endl;
	cout << "Sum before function: " << res << endl;
	
	//In this way we make the reference to the address so it knows where has to make the modification.
	ref(n1, n2, res);
	cout << "Sum after the function : " << res << endl;	
	

	return 0;
}

int sum(int n1, int n2, int res){
	res = n1 + n2;
	return res;
}

int ref(int n1, int n2, int &res){
	res = n1 + n2;
	return res;
}
