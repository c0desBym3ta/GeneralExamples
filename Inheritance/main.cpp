#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;



int main() {
    Dog dog("Spyke", 8, "male");

    dog.talk();
    dog.run();
    dog.bark();



    return 0;
}