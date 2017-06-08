#include <iostream>
#include <string>
using namespace std;


template<class first, class second>

second smaller(first a, second b){
	return(a<b?a:b);
}

int main(){
	int x = 55;
	float y = 40.94;

	cout << smaller(x,y) << endl;


	return 0;
}
