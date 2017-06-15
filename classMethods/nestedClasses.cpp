#include <iostream>
#include <string>
using namespace std;

//Nested class are classes inside other classes.

class Person{
public:	
	Person(string n = "Unknown.") : personName(n){
		cout << "Person constructor." << endl;
	}

	//Normanl definition also at the nested classes.
	class Address{
	public:
		Address(string c = "Unknown", string sn = "Unknown", int hn = -1){
			country = c;
			streetName = sn;
			houseNumber = hn;
			cout << "Address constructor." << endl;
		}
		void setCountry(string country){Address::country = country;}
		string getCountry() const{return country;}
		
		void setStreetName(string streetName){Address::streetName = streetName;}
		string getStreetName() const{return streetName;}
		
		void setHouseNumber(int houseNumber){Address:houseNumber = houseNumber;}
		int getHouseNumber() const{return houseNumber;}
	private:
		string country;
		string streetName;
		int houseNumber;	
	};
	//Definition of an address object can be made only inside the class.
	Address addr;
	//Normanl using like it be in main function.
	void addressPlease(){
		cout << "Person name: " << getPersonName() << endl;
		cout << "Coutry name: " << addr.getCountry() << endl;
		cout << "Street name: " << addr.getStreetName() << endl;
		cout << "House number: " << addr.getHouseNumber() << endl;
	}
	
	void setPersonName(string personName){Person::personName = personName;}
	string getPersonName() const{return personName;}
private:
	string personName;
};

int main(){
	Person ector;
	ector.addressPlease();
	cout << "\nUPDATING THE INFO" << endl;
	cout << "-----------------" << endl;
	ector.setPersonName("Ector.");
	ector.addr.setCountry("Egypt.");
	ector.addr.setStreetName("South Wanted Street Ovest.");
	ector.addr.setHouseNumber(17);
	ector.addressPlease();
	return 0;
}
