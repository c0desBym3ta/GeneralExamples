//
// Created by s3th on 6/9/17.
//

#ifndef INHERITANCE_ANIMAL_H
#define INHERITANCE_ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    //Constructor di default that cretaes the principles attributes for the animals.
    Animal(string name = "Unknown.", int age = 0, string sex = "Unknown.");
    virtual void talk() = 0; //Pure funtion because every animal has this but on its own way.
    virtual void run() = 0; //So no need of implementation.

    void setName(string name){Animal::name = name;}
    string getName() const{return name;}

    void setAge(int age){Animal::age = age;}
    int getAge() const{return age;}

    void setSex(string sex){Animal::sex = sex;}
    string getSex() const{return sex;}

protected: //Protected because other classes will inherit from this. So they need access.
    string name;
    int age;
    string sex;
};


#endif //INHERITANCE_ANIMAL_H
