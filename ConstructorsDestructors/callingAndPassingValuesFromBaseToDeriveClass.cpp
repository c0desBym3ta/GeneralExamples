#include <iostream>
#include <string>
using namespace std;


class Father{
public:
	Father(int h){
		cout << "Base class father costructor called." << endl;
		height = h;
	}
	
protected:
	int height;
};

class Mother{
public:
	Mother(string sc){
		cout << "Base class mother costructor called." << endl;
		skinColor = sc;
	}
		
protected:
	string skinColor;
};

class Child : public Father, public Mother{
public:
	//Passing the height form the father to this x child value
	Child(int x, string sc) : Father(x), Mother(sc){
		cout << "Derived class child constructor called." << endl;	
	}
	
	void display(){
		cout << "Height is " << height << "." << endl;
		cout << "Skin color is " << skinColor << "." << endl;
	}

};


int main(){
	Child ector(25, "black");
	ector.display();



	return 0;
}
