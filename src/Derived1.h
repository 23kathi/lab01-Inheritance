//
// Created by kathi on 24/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H
#include "Base.h"

class Derived1 : Base{
public:
    Derived1();
    ~Derived1();
    virtual void do_something()override;
    string toString();
};


#endif //LAB01_INHERITANCE_DERIVED1_H
