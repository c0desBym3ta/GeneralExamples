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
	line();

	cout << "Showing the capacity. " <<endl;
	cout << "Vector(ve) capacity: " << ve.capacity() << endl;
	line();
	
	cout << "Showing size and capacity after pushing back only one element." << endl;
	ve.push_back(10);
	cout << "Vector(ve) size: "<< ve.size() << endl;
	cout << "Vector(ve) capacity: " << ve.capacity() << endl;
	cerr << "COMMENT: Overloading the memory from 100 to 101 so need more allocation. Capacity will be increased." << endl;
	line();
	
	cout << "Pushing back second element. " << endl;
	ve.push_back(16);
	cout << "Vector(ve) size: " << ve.size() << endl;
	cout << "Vector(ve) capacity: "<< ve.capacity() << endl;
	cerr << "COMMENT: Memory already allocated so no need to make againg allocation. No change to the capacity." << endl;
	line();

	return 0;
}


void line(){
	cout << endl;
}

void lines(){
	line();line();
}
