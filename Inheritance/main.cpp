#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

void line();
void lines();

int main() {
    Dog dog("Spyke", 8, "male");

    dog.talk();
    dog.run();
    dog.bark();
    line();

    cout << "For changing the name,age,sex of our dog object we need getter/setter methods." << endl;
    dog.setAge(9);
    dog.setName("Glykoula");
    dog.setSex("female");
    dog.talk();
    line();

    cout << "Printing age, name, sex separately." << endl;
    cout << "My nane is " << dog.getName() << "." << endl;
    cout << "My age is " << dog.getAge() << "." << endl;
    cout << "My sex is " << dog.getSex() << "." << endl;



    return 0;
}

void line(){
    cout << endl;
}

void lines(){
    line();line();
}