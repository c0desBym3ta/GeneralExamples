#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

void line();
void lines();

int main(){
	cout << "Maps are containers that stores elements." << endl;
	cout << "Maps maintain values on tha basics of key. " << endl;
	cout << "Maps are associated containers." << endl;
	line();
	
	cout << "Need of two arguments to declare the map. The key and the value. " << endl;
	std::map<int, string> name_map;
	//Key first because it's the first data type.
	name_map[1] = "Daniel";
	name_map[2] = "Dora";
	name_map[3] = "Nikola";
	name_map[4] = "Elis";
	name_map[5] = "Ani";
	cout << "For accessing specific value use its key." << endl;
	cout << name_map[3] << endl;
	line();
	
	cout << "Printing elements of our map." << endl;
	cout << "Function first is the key, function second is the value. " <<endl;
	cout << "\t\t\t#####" << endl;
	cout << "\t\t\t#Map#" << endl;
	cout << "\t\t\t#####" << endl;
	cout << "[KEY]\t[VALUE]" << endl;
	cout << "#####\t#######" << endl;
	line();
	for(map<int, string>::iterator i = name_map.begin(); i!= name_map.end(); i++)
		cout << "(" << i->first << ") --> [" << i->second << "]" << endl;
	lines();
	
	cout << "We can like list and vectors clear a map. Try it by yourself." << endl;
	cout << "You can use to get map size like list and vectors. Try it by yourself."<< endl;
//	cout << "Map(name_map) size: " << name_map.size() << endl;
//	cout << "Clearing the map." << endl;
//	name_map.clear();
//	cout << "Cleared map size: " << name_map.size() << endl; 
	line();

	cout << "Insering new element with pair operation. Pairing key and value." << endl;
	name_map.insert(std::pair<int, string> (6, "Gregor"));	
	name_map.insert(std::pair<int ,string> (7, "Jurgen"));
	cout << "\t\t\t#####" << endl;
        cout << "\t\t\t#Map#" << endl;
        cout << "\t\t\t#####" << endl;
        cout << "[KEY]\t[VALUE]" << endl;
        cout << "#####\t#######" << endl;
        line();
        for(map<int, string>::iterator i = name_map.begin(); i!= name_map.end(); i++)
                cout << "(" << i->first << ") --> [" << i->second << "]" << endl;
        lines();

	cout << "Making a search with find operation." << endl;
	std::map<int, string>::iterator itr  = name_map.find(4);
	cout << "Key Found: " << itr->second << endl;
	line();
	
	cout << "Erasing something from the map. Taking the position of the operator." << endl;
	cout << "Use of erase operation." << endl;
	name_map.erase(itr);



	return 0;
}

void line(){
	cout << endl;
}

void lines(){
	lines(); lines();
}

