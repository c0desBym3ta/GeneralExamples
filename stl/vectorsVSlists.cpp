#include <iostream>
#include <string>
#include <vector>
#include <list>	
using namespace std;

void line();
void lines();

int main(){
	vector<float> v = {1,2,3,4,5};
	cout << "Vector: ";
	for(int i = 0; i<v.size(); i++)
                cout << "[" << v[i] << "]";
	lines();

	cout << "Pushing back number 6" << endl;
	v.push_back(6); //Adding items.
	cout << "Vector: ";
	for(int i = 0; i<v.size(); i++)
		cout <<"["<<v[i]<<"]";
	lines();
	
	cout << "Making the loop with iterators." << endl;
	cout << "Vector: ";
	for(vector<float>::iterator i = v.begin(); i!= v.end(); i++)
		cout << "[" << *i << "]";
	lines();

	return 0;
}


void line(){
	cout << endl;
}

void lines(){
	line();line();
}
