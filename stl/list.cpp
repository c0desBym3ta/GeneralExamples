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
	
	cout << "Size of the list is allocated as they need. No need of capacity." << endl;
	cout << "List(l) size: " << l.size() << endl;	
	line();

	cerr << "CANNOT ACCESS WITH [] like vectors." << endl;
	cerr << "CANNOT SET POINTER TO THE DATA like vectors. " << endl;
	cerr << "NO CONTIGUOUS MEMORY ANYMORE. " << endl;
	line();

	cout << "List are double linked list so we can go backwards. Use of reverse iterator." << endl;
	cerr << "STILL USE I++ AND NOT I--. " << endl;
	cout << "List: ";
	for(list<double>::reverse_iterator i = l.rbegin(); i!=l.rend(); i++)
		cout << "[" << *i << "]";
	lines();

	cout << "Changing elements." << endl;
	list<double>::iterator i = l.begin(); i++;
	*i = 100;
	cout << "Changing the second element to 100. " << endl;
	cout << "List: ";
	for(list<double>::iterator i = l.begin(); i!=l.end(); i++)
		cout << "[" << *i << "]";
	lines();
	
	cout << "You can clear and empty like the vectors. Try it yourslef." << endl;
	line();
	
	cout << "We can reverse our list with reverse operation." << endl;
	l.reverse();
	cout << "List: ";
	for(list<double>::iterator i = l.begin(); i != l.end(); i++)
		cout << "[" << *i << "]";
	lines();
	
	cout << "Already a sorting algorithm inside the list ready to use it. " << endl;
	list<double> li = {4,6,5,1,2,3};
	cout << "Unsorted list: ";
	for(list<double>::iterator i = li.begin(); i!=li.end(); i++)
		cout << "[" << *i << "]";
	line();
	li.sort();
	cout << "Sorting in progress....." << endl; 
	cout << "Sorted list: ";
	for(list<double>::iterator i = li.begin(); i != li.end(); i++)
		cout << "[" << *i << "]";
	lines();

	cerr << "There is also excist the forward list that is single list and not double linked." << endl;
	cerr << "Make the same operations as the double linked list except of backfarward." <<endl;
	cerr << "But it does save a bit of ram." << endl;
	
	return 0;
}


void line(){
	cout << endl;
}

void lines(){
	line();line();
}
