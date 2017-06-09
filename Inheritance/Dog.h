//
// Created by s3th on 6/9/17.
//

#ifndef INHERITANCE_DOG_H
#define INHERITANCE_DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog(string name = "Unknown.", int age = 0, string sex = "Unknown.");
    virtual void talk() override;
    virtual void run() override;
    void bark();

protected:

};


#endif //INHERITANCE_DOG_H
