#include <iostream>
#include <string>
using namespace std;

//Special operators (  [], {}, ->  )
//ERRORS: 1)Non static member functon. 2)They cannot be friends. 
//Let's start with []

class Marks{
public:
	Marks(int sub1, int sub2, int sub3){
		subjects[0] = sub1;
		subjects[1] = sub2;
		subjects[2] = sub3;
	}

	int operator[](int position){
		return subjects[position];
	}	

private:
	//Making an array that will store marks of 3 subjects.
	int subjects[3];
};

int main(){
	Marks ector(23,25,26);
	for(int i = 0; i<3; i++)
		cout << "Position ["<< i << "]: " << ector[i] << endl;


	return 0;
}
