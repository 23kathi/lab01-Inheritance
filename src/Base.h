//
// Created by kathi on 24/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Base {
public:
    Base();
    virtual ~Base();
    virtual void do_something();
};


#endif //LAB01_INHERITANCE_BASE_H
