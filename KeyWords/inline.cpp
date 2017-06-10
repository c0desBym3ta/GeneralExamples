#include <iostream>
#include <string>
using namespace std;

//Computer takes time to execute this function and sources that are not necessary.
//So we can decrease this "time" using the inline keyword to small functions like this.
inline void display(int a);

int main(){


	display(10);
	
	return 0;
}


inline void display(int a){
	cout << a << endl;
	
}
