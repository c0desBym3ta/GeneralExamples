#include <string>
#include <iostream>
using namespace std;

class Shape{
public:
	void setValues(int a, int b){
		width = a;
		height = b;
	}
	
protected:
	int height;
	int width;
};

class Description{
public:
	void print(string description_){
		cout << "We are using  " << description_ << " class " <<  endl;
	}
};

class Rectangle : public Shape, public Description{
public:
	int area(){
		return(height*width);
	}
	
protected:


};

int main(){
	Rectangle rec;
	rec.setValues(15,10);
	cout << "area rectangle = " << rec.area() << endl;
	rec.print("description");
	return 0;
}
