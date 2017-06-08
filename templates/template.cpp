#include <iostream>
#include <string>
using namespace std;

template <class daniel>

daniel addTemplate(daniel a, daniel b){
	return a+b;
}

int main(){
	float x = 5.6, res = 0.0, y = 5;
	res = addTemplate(x,y);
	cout << res << endl;

	return 0;
}


