//
// Created by kathi on 24/3/2022.
//

#include "Derived2.h"
Derived2::Derived2() {}

Derived2::~Derived2() {

}
void Derived2::do_something() {
    cout << toString();
}

string Derived2 ::toString() {
    stringstream x;
    x << "Derived2!!\n";
    return x.str();}