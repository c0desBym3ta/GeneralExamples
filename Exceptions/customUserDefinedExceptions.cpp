#include <iostream>
#include <string>
#include <exception>
using namespace std;

class OverSpeed : public exception{
public:
	const char *what(){
		return "Check your car speed. \nYou are int the cat not in the aeroplane.\n";
	}
	void setSpeed(int speed){this->speed = speed;}
	void getSpeed(){
		cout << "Your car speed is " << speed << endl;
	}
private:
	int speed;
};

class Car{
public:
	Car(){speed = 0; cout << "Speed is 0." << endl;}
	
	void accelarate(){
		for(;;){ //Increament wihtout limit. It will stop when the exception we be occured.
			speed += 10;
			cout << "Speed is: " << speed << endl;
			//Now we are gonna use and throw the ecxeption we have created.
			if(speed >= 250){
				OverSpeed os;
				os.setSpeed(speed); //Just setting the new speed.
				throw os;
			}
		}
	}

private:
	int speed;
};

int main(){
	Car ectorsCar;
	
	try{
		ectorsCar.accelarate();
	}catch(OverSpeed os){
		cout << os.what() << endl;
		os.getSpeed();
	}
	


	return 0;
}
