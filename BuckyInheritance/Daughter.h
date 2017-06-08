//
// Created by s3th on 6/7/17.
//

#ifndef BUCKYINHERITANCE_DAUGHTER_H
#define BUCKYINHERITANCE_DAUGHTER_H

#include "Mother.h"

class Daughter : public Mother {
public:
	Daughter();
	virtual void sayName() override;

private:


};


#endif //BUCKYINHERITANCE_DAUGHTER_H
