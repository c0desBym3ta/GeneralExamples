//
// Created by s3th on 6/9/17.
//

#include "Dog.h"

Dog::Dog(string name, int age, string sex) : Animal(name, age, sex){

}

void Dog::talk(){
    cout << "I am a dog. My name is " << name << " and my age is " << age << "." << endl;
}

void Dog::run() {
    cout << "I can run with 25miles/H. " << endl;
}

void Dog::bark() {
    cout <<"Woof is my signal! And me sex is also " << sex << endl;
}