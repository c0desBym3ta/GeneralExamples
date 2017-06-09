#include <iostream>
#include <string>
#include <vector>
#include <list>	
using namespace std;

void line();
void lines();

int main(){
	vector<float> v = {1,2,3,4,5};
	cout << "Vector(v) size: "<< v.size() << endl; 
	cout << "Vector: ";
	for(int i = 0; i<v.size(); i++)
                cout << "[" << v[i] << "]";
	lines();

	cout << "Pushing back number 6" << endl;
	v.push_back(6); //Adding items.
	cout << "Vector(v) size: " << v.size() << endl;
	cout << "Vector: ";
	for(int i = 0; i<v.size(); i++)
		cout <<"["<<v[i]<<"]";
	lines();
	
	cout << "Making the loop with iterators." << endl;
	cout << "Vector(v) size: " << v.size() << endl;
	cout << "Vector: ";
	//Initiate from the begin, to the end. Iterator it is a pointer.
	for(vector<float>::iterator i = v.begin(); i!= v.end(); i++)
		cout << "[" << *i << "]";
	lines();
	
	cout << "Iterating with data function vector." << endl;
	float *d = v.data(); //d points to the data of our vector(v).
	cout << "Vector(v) size: " << v.size() << endl;
	cout <<"Vector: ";
	for(int i = 0; i< v.size(); i++)
		cout << "[" << *d++ << "]";
	lines();

	cout << "Removing with pop back the last number from the vector."<<endl;
	v.pop_back();
	cout << "Vector(v) size: " << v.size() << endl;
	cout << "Vector: ";
	for(int i = 0; i < v.size(); i++)
		 cout <<"["<<v[i]<<"]";
	lines();
	
	cout << "Removing from middle position. A little slow for vectors." << endl;
	v.erase(v.begin() + 1);
	cout << "Vector(v) size: " << v.size() << endl;
	cout << "Vector: ";
	for(int i = 0; i < v.size(); i++)
		cout << "[" << v[i] << "]";
	lines();
	
	cout << "---------------------------------------------" << endl;
	vector <double> ve(100);
	cout << "Vector(ve) size: "<< ve.size() << endl;
	

	return 0;
}


void line(){
	cout << endl;
}

void lines(){
	line();line();
}
