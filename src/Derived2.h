//
// Created by kathi on 24/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H
#include "Base.h"
class Derived2 : Base {
public:
    Derived2();
    ~Derived2();
    virtual void do_something()override;
    string toString();
};


#endif //LAB01_INHERITANCE_DERIVED2_H
