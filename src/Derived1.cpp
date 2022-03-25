//
// Created by kathi on 24/3/2022.
//

#include "Derived1.h"

Derived1::Derived1() {}

Derived1::~Derived1() {

}
void Derived1::do_something() {
    cout << toString();
}

string Derived1 ::toString() {
    stringstream x;
    x << "Derived1!!\n";
    return x.str();
}
