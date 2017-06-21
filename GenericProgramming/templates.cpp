#include <iostream>
#include <string>	
using  namespace std;


int max(int x,   int y){return (x>y)?x:y;}
float max(float x, float y){return (x>y)?x:y;}


//Generic data type.
template <typename id>
void display(id x){
	cout << "You have passed " << x  << "." << endl;
}

int main(){
	int x,y;
//	cout << "Give first number: "; cin >> x;
//	cout << "Give second number: "; cin >> y;	
//	cout << "Max number: " <<  max(x,y) << endl;
	display(10);
	display(1.23);
	display("eisai malakas");
	return 0;
}
