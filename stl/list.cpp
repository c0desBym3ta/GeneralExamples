#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

void line();
void lines();

int main(){
	cout << "No need of reallocation like vectors. The are faster tha vectors." << endl;
	cout << "You can easier add elements to the begin, middle or end of the list."<<endl;
	list <double> l = {1,2,3,4,5};
	cout << "List: ";
	for(list<double>::iterator i = l.begin(); i != l.end(); i++)
		cout << "[" << *i << "]";
	lines();
	
	cout << "Add elements to the end with push back operation. " << endl;
	l.push_back(6);
	cout << "List: ";
	for(list<double>::iterator i = l.begin(); i != l.end(); i++)
		cout << "[" << *i << "]";
	lines();
	
	cout << "Add elements at the begin with the push front operation. " << endl;
	l.push_front(0);
	cout << "List: ";
	for(list<double>::iterator i = l.begin(); i!=l.end(); i++)
		cout << "[" << *i << "]";
	lines();

	cout << "Removing elements from the end/begin with the pop back/front operation." << endl;
	l.pop_back();
	l.pop_front();
	cout << "List: ";
	for(list<double>::iterator i = l.begin(); i!= l.end(); i++)
		cout << "[" << *i << "]";
	lines();

	cout << "Size of the list." << endl;
	cout << "List(l) size: " << l.size() << endl;	
	

	return 0;
}


void line(){
	cout << endl;
}

void lines(){
	line();line();
}
