#include <iostream>
#include <string>
using namespace std;

class Father{
public:
	float height;
	void askFather(){
		cout << "I am your father, ask me what do you want. " << endl;
	}

protected:

};

class Mother{
public:
	string skinColor;
	void askMother(){
		cout << "I am your mother, ask me what do you want. " << endl;
	}


protected:


};

class Child: public Father, public Mother{
public:
	void askParents(){
		cout << "I am asking my parents." << endl;
	}
	void setColorAndHeight(string childColor, float childHeight){ 
		skinColor = childColor;
		height = childHeight;
	}
	void display(){
		cout << "My height is " << height << " and my color is " << skinColor  << endl;	
	}

protected:


};

int main(){
	cout << "Test, OK!" << endl;
	Child daniel;
	daniel.setColorAndHeight("White", 1.85);
	daniel.display();
	daniel.askFather();
	daniel.askMother();	



	return 0;
}
